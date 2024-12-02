#include <iostream>
using namespace std;

class Dog
{
  public:
    Dog();
    Dog(char name[], int age, int weight);
    void showData();
  private:
    char Name[20];
    unsigned int Age;
    unsigned int Weight;
};

Dog::Dog()
{
  strcpy(Name, "jong");
  Age = 3;
  Weight = 4;
}

Dog::Dog(char name[],int age, int weight)
{
  strcpy(Name, name);
  Age = age;
  Weight = weight;
}

void Dog::showData()
{
  cout << "나이는 " << Age << "입니다.\n";
  cout << "몸무게는 " << Weight << "입니다.\n";
}

int main()
{
  Dog happy;
  Dog *pt;        // 객체 포인터 선언
  Dog marry("happy", 5, 6);
  pt = &marry;
  pt->showData(); 

  system("PAUSE");
  return 0; 
}
