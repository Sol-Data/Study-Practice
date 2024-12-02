#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(char *name, int age, int weight);
    ~Dog();
    void showData();
  private:
    char *Name;   // 문자열 저장 - 포인터 사용
    unsigned int Age;
    unsigned int Weight;
};

Dog::~Dog()
{
  delete[] Name;
}

Dog::Dog(char *name, int age, int weight)
{
  Name = new char[20]; // 포인터 멤버변수 Name에 대해 동적 메모리 영역 할당
  strcpy(Name, name);
  Age = age;
  Weight = weight;
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
  Dog *obj2 = new Dog(*obj1);  // obj2 객체 생성
  
  obj1->showData();
  delete obj1;  // 객체 포인터 obj1의 동적 메모리 해제,
  // 객체 포인터 obj2의 Name의 동적 메모리도 해제된다.
  // 따라서 obj2의 Name은 아무 것도 없는 위치를 가리킨다.
  
  obj2->showData(); // 따라서 엉뚱한 결과를 초래, Name이 올바로 출력되지 않음
  delete obj2;  // 객체 포인터 obj2 해제
  system("PAUSE");
  return 0;
}
