#include <iostream>
using namespace std;

class Dog
{
 public:      // 공개 선언 
  Dog();      // 디폴트 생성자
  Dog(int age, int weight);  // 매개변수가 있는 생성자 
  // 생성자 Dog()가 두 번이상 존재하므로 생성자 오버로드 
  void DataShow();
 private:     // 비공개 선언 
  unsigned int Age;
  unsigned int Weight;
};

Dog::Dog()   // 디폴트 생성자의 정의 
{
  Age = 3;
  Weight = 4;
}

Dog::Dog(int age, int weight) // 매개변수가 있는 생성자의 정의 
{
  Age = age;        // 멤버변수 Age 초기화 
  Weight = weight;  // 멤버변수 Weight 초기화 
}

void Dog::DataShow()
{
  cout << "나이는 " << Age << "입니다.\n";
  cout << "몸무게는 " << Weight << "입니다.\n";
}

int main()
{
  Dog happy;       // happy 객체 생성, 디폴트 생성자 실행
  Dog marry(5, 7); // marry 객체 생성, 매개변수를 가지는 생성자 실행 
  happy.DataShow();
  marry.DataShow();

  system("PAUSE");
  return 0; 
}
