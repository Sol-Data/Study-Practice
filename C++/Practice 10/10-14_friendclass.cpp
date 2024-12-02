#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(int age, int weight);         // 매개변수를 가지는생성자
    friend void DataShow(Dog &obj);   // friend 함수 선언
  private:
    unsigned int Age;
    unsigned int Weight;
};

Dog::Dog(int age, int weight)
{
  Age = age;
  Weight = weight;
}

// friend 함수는 멤버 함수가 아니므로 어떤 클래스에도 속하지 않는다.
// 범위 접근 연산자(::)가 필요 없다.
void DataShow(Dog &obj)   // firend 함수 정의
{
  cout << "나  이: " << obj.Age << endl;  // private 멤버 참조
  cout << "몸무게: " << obj.Weight << endl;
}

int main()
{
  Dog happy = Dog(3, 4);
  DataShow(happy);

  system("PAUSE");
  return 0;
}
