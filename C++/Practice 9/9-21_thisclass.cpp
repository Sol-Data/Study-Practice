#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(char name[], int age, int weight);
    ~Dog();
    void showData();
  private:
    char Name[20];
    unsigned int Age;
    unsigned int Weight;
};

Dog::Dog(char name[], int age, int weight)
{
  cout << "생성자 호출" << endl;
  strcpy(Name, name);
  Age = age;
  Weight = weight;
}

Dog::~Dog()  
{
  cout << "소멸자 호출" << endl;
  system("PAUSE");
}

void Dog::showData()
{
  cout << "나  이: " << this->Age << endl;
  // 이 경우 멤버변수를 구분할 수 있으므로 this->를 생략할 수 있다.  
  cout << "몸무게: " << this->Weight << endl;
}

int main()
{
  Dog *pt;     // Dog 클래스 형식의 객체 포인터  pt를 선언 
  pt = new Dog("happy", 5, 6);
  
  pt->showData();
  
  delete pt;

  return 0;
}
