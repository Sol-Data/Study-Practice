#include <iostream>
using namespace std;
#include <iomanip>

struct Student
{
  char hakbun[8]; // 학번
  char name[20];  // 이름
  int c;          // C 교과 점수
  int cpp;        // C++ 교과 점수
  int web;        // Web 교과 점수
};

int main()
{
  struct Student kang = {"0821001", "강한자", 99, 88, 97};
  struct Student kim = {"0821042", "김부자", 94, 83, 92};
  
  cout << "  학 번  | 이 름 |  C  | C++ | Web |\n";
  cout << setw(9) << kang.hakbun;
  cout << setw(8) << kang.name;
  cout << setw(6) << kang.c;
  cout << setw(6) << kang.cpp;
  cout << setw(6) << kang.web << endl;

  system("PAUSE");
  return 0;
}
