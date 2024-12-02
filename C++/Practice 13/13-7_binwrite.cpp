#include <iostream>
#include <fstream>
using namespace std;

struct student
{
  char name[20];
  int kor, eng, mat;
};

int main()
{
  struct student std;
  ofstream fout;
  const int SIZE = 80;
  int i;
  const char *file = "test2.dat";
  fout.open(file, ios::out | ios::binary);
  // 이진 파일로 열기, 읽기 전용
  
  for(i = 0; i < 2; i++)
  {
    cout << "이름을 입력하세요 : ";
    cin.getline(std.name, 80);  // 공백을 포함한 문자열 입력
    cout << "국어 점수를 입력하세요 : ";
    cin >> std.kor;
    cout << "영어 점수를 입력하세요 : ";
    cin >> std.eng;
    cout << "수학 점수를 입력하세요 : ";
    cin >> std.mat;
    cin.ignore(SIZE, '\n');
    
    fout.write((char *)&std, sizeof(std));
    // 레코드 단위로 파일을 기록한다.
  }
  fout.close();
  
  system("PAUSE");
  return 0;
}


