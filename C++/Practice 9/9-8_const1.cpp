#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Student
{
 private:
  char hakbun[8];  // 학번 
  char name[20];   // 이름 
  int c;           // C 점수 
  int cpp;         // C++ 점수 
  int web;         // Web 점수 
 public:
  Student(char num[], char n[], int c1, int cpp1, int w);
    // 매개변수가 있는 생성자 
  void showData();  // 멤버함수
};

Student::Student(char num[], char n[], int c1, int cpp1, int w)
{
  strcpy(hakbun, num);
  strcpy(name, n);
  c = c1;
  cpp = cpp1;
  web = w;
}

void Student::showData()
{
  cout << "  학  번 | 이  름 |  C  | C++ | Web |\n";
  cout << setw(9) << hakbun;
  cout << setw(8) << name;
  cout << setw(6) << c;
  cout << setw(6) << cpp;
  cout << setw(6) << web << endl;
}

int main()
{
  Student kang = Student("0821001", "강한자", 99, 88, 97);
  // 객체 생성, 자동으로 생성자 Student(...);를 호출하여 초기화 
  kang.showData();  // 멤버함수 showData()호출 

  system("PAUSE");
  return 0; 
}
