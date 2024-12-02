#include <iostream>
using namespace std;

class Cat;
// 여러 개의 클래스에서 공통 프렌드 함수를 사용할 때 선언하여 전방 참조한다.
// 클래스 Dog에서 클래스 Cat을 사용하므로 Cat 클래스의 원형을 선언한다.
 
class Dog
{
  public:
    Dog(int age, int weight) {Age = age; Weight = weight;};
    friend void dataShow(Dog &obj);
    friend void cpy(Dog &obj, Cat obj2);
    
  private:
    friend class Cat;
    unsigned int Age;
    unsigned int Weight;
};

class Cat
{
  public:
    Cat(int age, int weight) {Age = age; Weight = weight;};
    friend void dataShow(Dog &obj);
    friend void cpy(Dog &obj, Cat obj2);

  private:
    unsigned int Age;
    unsigned int Weight;
};

void dataShow(Dog &obj)
{
  cout << "나  이: " << obj.Age << endl;
  cout << "몸무게: " << obj.Weight << endl;
}

void cpy(Dog &obj, Cat obj2)
// 참조 인자(&)를 사용해야 멤버 변수의 값을 수정할 수 있다.
{
  obj.Age = obj2.Age;
  obj.Weight = obj2.Weight;
}

int main()
{
  Dog happy = Dog(3, 4);
  Cat cat = Cat(5, 7);
  
  dataShow(happy);
  cpy(happy, cat);
  
  dataShow(happy);

  system("PAUSE");
  return 0;
}
