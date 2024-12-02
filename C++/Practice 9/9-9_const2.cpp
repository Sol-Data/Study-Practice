#include <iostream>
using namespace std;

class Dog
{
 public:      // 공개 선언 
  Dog(int age, int weight);  // 매개변수가 있는 생성자 
  void DataShow();
 private:     // 비공개 선언 
  unsigned int Age;
  unsigned int Weight;
};

Dog::Dog(int age, int weight)
{
  Age = age;        // 멤버변수 Age 초기화 
  Weight = weight;  // 멤버변수 Weight 초기화 
}

void Dog::DataShow()
{
  cout << "happy의 나이는 " << Age << "입니다.\n";
  cout << "happy의 몸무게는 " << Weight << "입니다.\n";
}

int main()
{
  Dog happy = Dog(3,4);
  // 생성자 Dog() 호출, 실인수 3을 Age, 실인수 4를 Weight에 전달
  happy.DataShow();

  system("PAUSE");
  return 0; 
}
