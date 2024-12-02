#include <iostream>
#include <cstring>
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
  Student();  // 디폴트 생성자, 생성자 이름은 클래스 이름과 같다.
  void showData();  // 멤버함수
};

Student::Student()
{
  strcpy(hakbun, "0821001");
  strcpy(name, "박달재");
  c = 88;
  cpp = 99;
  web = 95;
}

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
  Student park;    // 객체 생성, 자동으로 생성자 Student()를 
                   // 호출하여 초기화 한다. 
  park.showData(); // showData()함수 호츌 

  system("PAUSE");
  return 0; 
}
