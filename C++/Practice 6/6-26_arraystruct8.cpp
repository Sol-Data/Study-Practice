#include <iostream>
using namespace std;
#include <iomanip>
#include <cstring> 
void chongedata(struct Student *pst);

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
  struct Student lee = {"182183", "이순신", 99, 88, 77};
  struct Student *pt;
  
  pt = &lee;
  chongedata(&lee); // 구조체의 주소값으로 함수에 전달
  chongedata(&lee); 
  chongedata(pt);   // pt는 주소값이므로 *pt를 사용하면 오류가 발생한다.

  system("PAUSE");
  return 0;
}

void chongedata(struct Student *pst)
{
  cout << "  학 번  | 이 름 |  C  | C++ | Web |\n";
  cout << setw(9) << pst->hakbun;
  cout << setw(8) << pst->name;
  cout << setw(6) << pst->c;
  cout << setw(6) << pst->cpp;
  cout << setw(6) << pst->web << endl;
  
  strcpy(pst->name, "이기자");
  pst->cpp = 100;
}
