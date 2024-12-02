#include <iostream>
using namespace std;

class Dog
{
 public:
  unsigned int Age;
  unsigned int Weight;
  void DataShow();
};

void Dog::DataShow()
{
  cout << "나이는 " << Age << "입니다.\n";
  cout << "몸무게는 " << Weight << "입니다.\n";
}

int main()
{
  Dog happy;

  happy.Age = 3;
  happy.Weight = 4;
  happy.DataShow(); 

  system("PAUSE");
  return 0; 
}
