#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(char name[], int age, int weight);  // 생성자 선언
    ~Dog();                                 // 소멸자 선언
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
  cout <<"소멸자 호출" << endl;
  
  system("PAUSE");
}

void Dog::showData()
{
  cout << "나이는 " << Age << "입니다.\n";
  cout << "몸무게는 " << Weight << "입니다.\n";
}

int main()
{
  Dog *pt;        // 객체 포인터 선언
  pt = new Dog("happy", 5, 6);

  pt->showData(); 

  delete pt;      // 동적으로 할당받은 메모리 영역 해제

  return 0; 
}
