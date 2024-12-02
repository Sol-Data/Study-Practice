#include <iostream>
using namespace std;

class Dog
{
 public:
  Dog(unsigned int age, unsigned int weight);
  void SetData(unsigned int age, unsigned int weight);
  void GetData() const;  // const 멤버함수로 선언 
 private:
  unsigned int Age;
  unsigned int Weight;
};

Dog::Dog(unsigned int age, unsigned int weight)
{
  Age = age;
  Weight = weight;
}

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
  Dog happy(3, 4);
  const Dog marry(5, 7);

  happy.GetData(); 
  marry.SetData(8, 9);  // 오류! - marry는 const 객체 
  marry.GetData();

  system("PAUSE");
  return 0; 
}
