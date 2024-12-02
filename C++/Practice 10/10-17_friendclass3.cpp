#include <iostream>
using namespace std;

class Dog;
class Cat
{
  public:
    Cat(int age, int weight) {Age = age; Weight = weight;};
    void dataShow(Dog &obj);
  private:
    unsigned int Age;
    unsigned int Weight;
    friend class Dog;
    // Dog 클래스는 Cat의 프렌드이므로 Dog 클래스의 모든 멤버 함수에서 
    // Cat 클래스의 private 멤버 변수에 접근할 수 있다. 
};

class Dog
{
  public:
    Dog(int age, int weight) {Age = age; Weight = weight;};
    void dataShow(Cat &obj);
  private:
    unsigned int Age;
    unsigned int Weight;
};

void Dog::dataShow(Cat &obj)
{
  cout << "나  이: " << obj.Age << endl;
  // Dog 클래스의 멤버함수에서 Cat 클래스의 private 멤버변수에 접근
  cout << "몸무게: " << obj.Weight << endl;
}

int main()
{
  Dog happy = Dog(3, 4);
  Cat cat = Cat(5, 7);

  happy.dataShow(cat);

  system("PAUSE");
  return 0;
}
