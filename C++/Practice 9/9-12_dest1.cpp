#include <iostream>
using namespace std;

class Dog
{
 public:
  Dog();    // 생성자 
  ~Dog();   // 소멸자 
  void DataShow();
 private:
  unsigned int Age;
  unsigned int Weight;
};

Dog::Dog()  // 생성자의 정의
{
  cout << "생성자 호출 \n";
  Age = 3;
  Weight = 4;
}

Dog::~Dog()  // 소멸자의 정의 
{
  cout << "소멸자가 호출 \n"; 
  system("PAUSE");
}

void Dog::DataShow()
{
  cout << "happy의 나이는 " << Age << "입니다.\n";
  cout << "happy의 몸무게는 " << Weight << "입니다.\n";
}

int main()
{
  Dog happy;  // 객체 생성, 생성자 Dog()가 자동으로 호출되어 실행된다. 

  happy.DataShow();

  // system("PAUSE");
  return 0;         // 소멸자 ~Dog()가 자동으로 호출되어 실행된다. 
}
