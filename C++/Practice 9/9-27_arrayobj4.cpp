#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(char name[], int age, int weight);
    void showData();
  private:
    char Name[20];
    unsigned int Age;
    unsigned int Weight;
};

// void showObj(Dog *pt); // 객체 포인터를 사용한 전역 멤버 함수 원형

Dog::Dog(char name[], int age, int weight)
{
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

void showObj(Dog *pt)
{
  for(int i = 0; i < 3; i++)
     (pt + i)->showData();
}

int main()
{
  Dog ar[3] = {Dog("해피", 3, 4),
               Dog("메리", 5, 6),
               Dog("누렁이", 7, 8)};
  // 배열을 사용해 3 개의 객체를 생성
 
  showObj(ar); // 객체 배열의 시작주소를 함수의 매개변수(실인수)로 전달
  system("PAUSE");
  return 0;
}
