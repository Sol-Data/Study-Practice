#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(int age, int weight);
    Dog &setData();  // 참조(&) 타입으로 멤버 함수의 원형을 선언
    void showData();
  private:
    unsigned int Age;
    unsigned int Weight;
};

Dog::Dog(int Age, int Weight)
{
  this->Age = Age; // 멤버변수 this->Age와 지역변수 Age를 구분
  this->Weight = Weight;
}

Dog &Dog::setData() // 참조(&) 타입으로 멤버 함수 정의
{
  Age = 7;
  Weight = 8;
  return *this;
}

void Dog::showData()
{
  cout << Age << endl;
  cout << Weight << endl;
}

int main()
{
  Dog happy = Dog(3, 4);
  happy.showData();
  
  happy.setData().showData(); // 두개의  멤버 함수를 연속하여 호출
  
  system("PAUSE");
  return 0;
}
