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
  struct Student kim;
  kim = kang; // 구조체 변수 kim에 kang의 모든 멤버값을 복사
  
  cout << "  학 번  | 이 름 |  C  | C++ | Web |\n";
  cout << setw(9) << kim.hakbun;
  cout << setw(8) << kim.name;
  cout << setw(6) << kim.c;
  cout << setw(6) << kim.cpp;
  cout << setw(6) << kim.web << endl;

  system("PAUSE");
  return 0;
}
