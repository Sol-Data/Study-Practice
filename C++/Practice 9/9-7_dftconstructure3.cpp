#include <iostream>
using namespace std;

class Dog
{
 public:      // 공개 선언 
  Dog();
  void DataShow();
 private:     // 비공개 선언 
  unsigned int Age;
  unsigned int Weight;
};

Dog::Dog()    // 생성자 정의
{
  Age = 3;    // 멤버변수 초기화 
  Weight = 4; // 멤버변수 초기화 
} 

void Dog::DataShow()
{
  cout << "happy의 나이는 " << Age << "입니다.\n";
  cout << "happy의 몸무게는 " << Weight << "입니다.\n";
}

int main()
{
  Dog happy;

  happy.DataShow();

  system("PAUSE");
  return 0; 
}
