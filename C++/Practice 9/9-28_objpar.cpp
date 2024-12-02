#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog(char *name, int age, int weight);
    void showData();
  private:
    char Name[20];
    unsigned int Age;
    unsigned int Weight;
};

Dog::Dog(char *name, int age, int weight)
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

int main()
{
  Dog obj1("해피", 3, 4);  // 객체1을 생성
  Dog obj2(obj1);    // 객체1을 매개변수로 전달하여 객체2를 초기화
  
  obj1.showData();
  obj2.showData();
  system("PAUSE");
  return 0;
}
