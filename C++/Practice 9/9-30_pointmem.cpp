#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(const Dog &cct); // 복사 생성자 선언
    Dog(char *name, unsigned int age, unsigned int weight);
    ~Dog();
    void showData();
  private:
    char *Name;   // 문자열 저장 - 포인터 사용
    unsigned int Age;
    unsigned int Weight;
};

Dog::Dog(const Dog &cct) // 복사 생성자 정의
{
  Name = new char[20];
  strcpy(Name, cct.Name);
  
  Age = cct.Age;
  Weight = cct.Weight;
}

Dog::Dog(char *name, unsigned int age, unsigned int weight)
{
  Name = new char[20]; // 포인터 멤버변수 Name에 대해 동적 메모리 영역 할당
  strcpy(Name, name);
  Age = age;
  Weight = weight;
}

Dog::~Dog()
{
  delete[] Name;
}


void Dog::showData()
{
  cout << "이름: " << Name << ", ";
  cout << "나이: " << Age << ", ";
  cout << "몸무게: " << Weight << endl;
}

int main()
{
  Dog *obj1 = new Dog("해피", 3, 4);
  // obj1 객체 생성, 동적 메모리 할당
  Dog *obj2 = new Dog(*obj1);
  // 복사 생성자를 호출하여 obj2 객체 생성

  obj1->showData();
  delete obj1; // 동적 메모리 해제
  // obj2의 Name의 동적 메모리도 해제한다.
  // 그러나 obj2의 Name은 복사 생성자를 사용한 Name의 위치를 복사한다.
  
  obj2->showData();
  // obj2의 Name은 동적 메모리 위치를 복사, 정확한 값이 출력된다.
  delete obj2;  // 객체 포인터 해제
  system("PAUSE");
  return 0;
}
