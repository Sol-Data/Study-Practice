#include <iostream>
using namespace std;
#include <iomanip>
#include <cstring>
void chongedata(struct Student st);

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
  chongedata(lee); // 함수 호출시 구조체 변수를 직접 전달하는 것은
  chongedata(lee); // 좋은 방법이 아니다.
  chongedata(*pt);

  system("PAUSE");
  return 0;
}

void chongedata(struct Student st)
{
  cout << "  학 번  | 이 름 |  C  | C++ | Web |\n";
  cout << setw(9) << st.hakbun;
  cout << setw(8) << st.name;
  cout << setw(6) << st.c;
  cout << setw(6) << st.cpp;
  cout << setw(6) << st.web << endl;
  
  strcpy(st.name, "이기자");
  st.cpp = 100;
}
