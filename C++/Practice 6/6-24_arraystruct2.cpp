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
  struct Student lee = {"182183", "이순신", 87, 92, 85};
  struct Student *pt;
  
  pt = &lee;

  cout << "  학 번  | 이 름 |  C  | C++ | Web |\n";
  
  cout << setw(9) << pt->hakbun;
  cout << setw(8) << pt->name;
  cout << setw(6) << pt->c;
  cout << setw(6) << pt->cpp;
  cout << setw(6) << pt->web << endl;
   
  system("PAUSE");
  return 0;
}
