#include <iostream>
#include <cstring>
using namespace std;

class Dog
{
  public:
    Dog();
    Dog(char *name, int age, int weight);
    ~Dog();
    Dog &operator =(Dog &obj); // 대입 연산자 오버로드
    void DataShow();
  private:
    char *Name;
    int Age;
    int Weight;
};

Dog::Dog()  // 생성자 정의
{
  Name = new char[20];  //new 연산자로 동적 메모리를 할당
  strcpy(Name, "      "); 
  Age = 3;
  Weight = 4;
}

Dog::Dog(char *name, int age, int weight)
// 매개변수가 있는 생성자 정의
{
  Name = new char[20];
  strcpy(Name, name);
  Age = age;
  Weight = weight;
}

Dog::~Dog()
{
  delete[] Name;
}

Dog &Dog::operator =(Dog &obj) // 대입 연산자 오버로드 정의
{
  strcpy(Name, obj.Name);
  Age = obj.Age;
  Weight = obj.Weight;
  return *this;  // 객체의 멤버 전체(*this)를 반환한다.
}

void Dog::DataShow()
{
  cout << "이  름: " << Name << endl;
  cout << "나  이: " << Age << endl;
  cout << "몸무계: " << Weight << endl;
}

int main()
{
  Dog pet;
  Dog marry("애완동물", 5, 7);
  Dog nuri = Dog("애완", 8, 9);

  pet = marry; // 대입 연산자 오버로드를 호출하여 객체 간에 대입한다. 
  pet.DataShow();

  pet = nuri; // 대입 연산자 오버로드를 호출하여 객체 간에 대입한다.
  pet.DataShow();

  system("PAUSE");
  return 0;
}
