#include <iostream>
using namespace std;

class Dog
{
 public:
  Dog(unsigned int age, unsigned int weight);
  mutable unsigned int Age;
  mutable unsigned int Weight;
  void DataShow() const;
};

Dog::Dog(unsigned int age, unsigned int weight)
{
  Age = age;
  Weight = weight;
}

void Dog::DataShow() const
{
  cout << "나이는 " << Age << "입니다.\n";
  cout << "몸무게는 " << Weight << "입니다.\n";
}

int main()
{
  const Dog happy(3,4);  // const 상수 객체 

  happy.Age = 5;  // 오류! 
  happy.Weight = 6;   // 오류! 

  happy.DataShow(); 

  system("PAUSE");
  return 0; 
}
