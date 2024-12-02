#include <iostream>
using namespace std;
#include <fstream>
#include <iomanip>
#include <cstdlib>

struct student
{
  char name[20];
  int kor, eng, mat;
};

int main()
{
  struct student std;
  fstream fio;  // 읽기/쓰기 겸용인 경우 fstream 클래스 객체를 생성한다.
  const char *file = "test2.dat";
  fio.open(file, ios::in | ios::out | ios::binary);
  // 이진 파일, 읽기/쓰기 겸용 모드
  
  int ct = 0;  // 레코드 개수 초기화
  
  if(fio.is_open())
  {
    fio.seekg(0);
    cout << "파일의 현재 내용은 다음과 같습니다:\n";
    cout << setw(15) << "레코드 번호 " << setw(20) << "이름 : "
         << setw(12) << "국어 : " << setw(12) << "영어 : "
         << setw(12) << "수학 : " << "\n";
    for(int i = 0; i < 71; i++) cout << "-";
    cout << endl;
    while(fio.read((char *) &std, sizeof std))
    {
      cout << setw(10) << ct++ << setw(24) << std.name
           << setw(11) << std.kor << setw(11) << std.eng
           << setw(11) << std.mat << "\n";
    }
    if(fio.eof()) fio.clear(); // 파일의 끝이면 eof 플래그 해제
    else
    {
      cerr << "파일을 읽다가 오류 발생.\n";
      exit(1);
    }
  }
  else
  {
    cerr << "파일을 열 수 없습니다. 종료.\n";
    exit(2);
  }
  cout << "수정할 레코드 번호를 입력하십시오: ";
  long rec;
  cin >> rec;
  while(cin.get() != '\n') continue; // 개행문자를 삭제한다.
  if(rec < 0 || rec >= ct) // 레코드의 개수를 벗어나는 경우
  {
    cerr << "잘못된 레코드 번호입니다. 종료.\n";
    exit(3);
  }
  streampos stdace = rec * sizeof std;
  fio.seekg(stdace);
  if(fio.fail())
  {
    cerr << "레코드를 찾다가 오류 발생.\n";
    exit(4);
  }
  fio.read((char *) &std, sizeof std);
  cout << "현재 레코드의 내용:\n";
  cout << rec << ": " << setw(25) << std.name << ": "
       << setw(6) << std.kor << setw(6) << std.eng
       << setw(6) << std.mat << "\n";
  if(fio.eof()) fio.clear();
  
  cout << "이름을 입력하십시오: ";
  cin.get(std.name, 20);
  while(cin.get() != '\n') continue;
  
  cout << "국어 점수를 입력하세요 : ";
  cin >> std.kor;
  cout << "영어 점수를 입력하세요 : ";
  cin >> std.eng;
  cout << "수학 점수를 입력하세요 : ";
  cin >> std.mat;
  fio.seekp(stdace);
  fio.write((char *) &std, sizeof std) << flush;
  if(fio.fail())
  {
    cerr << "쓰다가 오류 발생.\n";
    exit(5);
  }
  // 개정된 파일을 화면에 표시한다.
  ct = 0;
  fio.seekg(0);
  cout << " 파일의 개정된 내용은 다음과 같습니다:\n";
  while(fio.read((char *) &std, sizeof std))
  {
    cout << "레코드 번호 " << ct++ << ": " << setw(25)
         << std.name << ": " << setw(6) << std.kor
         << setw(6) << std.eng << setw(6) << std.mat << "\n";
  }
  fio.close();
  
  system("PAUSE");
  return 0;
}


