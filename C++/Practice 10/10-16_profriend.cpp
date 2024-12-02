#include <iostream>
using namespace std;

class Dog;
class Cat
{
  public:
    Cat(int age, int weight) {Age = age; Weight = weight;};  // 생성자 
    void dataShow(Dog &obj);
  private:
    unsigned int Age;
    unsigned int Weight;
};

class Dog
{
  public:
    Dog(int age, int weight) {Age = age; Weight = weight;};
    // Cat 클래스에 있는 멤버 함수를 프렌드로 지정하여 이곳에서 사용
    friend void Cat::dataShow(Dog &obj);
  private:
    friend class Cat;
    unsigned int Age;
    unsigned int Weight;
};

void Cat::dataShow(Dog &obj)
{
  cout << "나  이: " << obj.Age << endl;
  cout << "몸무게: " << obj.Weight << endl;
}


int main()
{
  Dog happy = Dog(3, 4);
  Cat cat = Cat(5, 7);

  cat.dataShow(happy);

  system("PAUSE");
  return 0;
}
