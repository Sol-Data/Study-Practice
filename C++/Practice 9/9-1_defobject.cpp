#include <iostream>
#include <cstring>
using namespace std;

class Student
{
 public:
  char hakbun[8];    // 학번
  char name[20];     // 이름
  int c;             // C 점수
  int cpp;           // C++ 점수
  int web;           // Web 점수
  void showData();   // 멤버 함수 선언
};

// 멤버 함수 showData() 정의
void Student::showData()
{
  cout << "학번 : " << hakbun << endl;
  cout << "이름 : " << name << endl;
  cout << "C : " << c << endl;
  cout << "C++ : " << cpp << endl;
  cout << "Web : " << web << endl;
}

int main()
{
  Student park;
  strcpy(park.hakbun, "0821001");
  strcpy(park.name, "박달재");
  park.c = 88;
  park.cpp = 99;
  park.web = 95;
  park.showData();
  
  system("PAUSE");
  return 0;
}     


 
