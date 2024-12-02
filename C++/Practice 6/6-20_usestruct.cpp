#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
  char hakbun[8]; // 학번
  // string hakbun;
  char name[20];  // 이름
  int c;          // C 교과 점수
  int cpp;        // C++ 교과 점수
  int web;        // Web 교과 점수
};

int main()
{
  struct Student park;
  strcpy(park.hakbun, "0821001");
  // park.hakbun = "0821001";
  strcpy(park.name, "박달재");
  park.c = 88;
  park.cpp = 99;
  park.web = 95;
  
  cout << "학번 : " << park.hakbun << endl;
  cout << "이름 : " << park.name << endl;
  cout << "c : "    << park.c << endl;
  cout << "c++ : "  << park.cpp << endl;
  cout << "web : "  << park.web << endl;

  system("PAUSE");
  return 0;
}
