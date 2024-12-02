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

int main()
{
  Dog ar[3] = {Dog("해피", 3, 4),
               Dog("메리", 5, 6),
               Dog("누리", 7, 8)};
  ar[0].showData(); // 객체 1의 멤버 변수 출력
  ar[1].showData(); // 객체 2의 멤버 변수 출력
  ar[2].showData(); // 객체 3의 멤버 변수 출력
  
  system("PAUSE");
  return 0;
}
