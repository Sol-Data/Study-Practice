#include <iostream>
using namespace std;

class Dog
{
 public:
  void GetData() const;  // const 멤버함수로 선언 
  void SetData(unsigned int age, unsigned int weight);
 private:
  unsigned int Age;
  unsigned int Weight;
};

void Dog::SetData(unsigned int age, unsigned int weight)
{
  Age = age;
  Weight = weight;
} 

void Dog::GetData() const  // const 멤버함수 정의  
{
  cout << "나이는 " << Age << "입니다.\n";
  cout << "몸무게는 " << Weight << "입니다.\n";
}

int main()
{
  Dog happy;

  happy.SetData(3,4);
  happy.GetData(); 

  system("PAUSE");
  return 0; 
}
