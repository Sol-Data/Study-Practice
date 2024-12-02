#include <iostream>
using namespace std;

class Dog
{
 public:
  unsigned int Age;
  unsigned int Weight;
  void DataShow();
};

void Dog::DataShow()
{
  cout << "나이는 " << Age << "입니다.\n";
  cout << "몸무게는 " << Weight << "입니다.\n";
}

int main()
{
  const Dog happy;  // const 상수 객체 

  happy.Age = 3;  // 오류! 
  // happy는 const 객체이므로 멤버변수값을 변경할 수 없다.  
  happy.Weight = 4;   // 오류! 

  happy.DataShow(); 

  system("PAUSE");
  return 0; 
}
