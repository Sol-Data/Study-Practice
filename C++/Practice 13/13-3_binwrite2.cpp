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
  ofstream fout;    // 출력 파일 객체를 생성한다.
  const int SIZE = 80;
  int i;
  
  fout.open("test3.txt", ios::out); // 출력파일 쓰기 전용으로 연결
  
  for(i = 0; i < 2; i++) {
    cout << "이름을 입력하세요 : ";
    cin.getline(std.name, 20);
    cout << "국어 점수를 입력하세요 : ";
    cin >> std.kor;
    cout << "영어 점수를 입력하세요 : ";
    cin >> std.eng;
    cout << "수학 점수를 입력하세요 : ";
    cin >> std.mat;
    cin.ignore(SIZE, '\n');
    
    fout << std.name << std.kor << std.eng << std.mat;
  }
  fout.close();
  return 0;
}


