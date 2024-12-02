#include <iostream>
#include <iomanip>
using namespace std;

class Dog
{
 public:
  static int mari;
  Dog(int age, int weight);
  void DataShow();
 private:
  unsigned int Age;
  unsigned int Weight;
};

int Dog::mari = 0;

Dog::Dog(int age, int weight)
{
  Age = age;
  Weight = weight;

  mari++;
}

void Dog::DataShow()
{
  cout << setw(4) << Age;
  cout << setw(9) << Weight;
  cout << setw(9) << mari << endl;
}

int main()
{
  Dog happy(3, 4);
  cout << "나  이: 몸무게 : 개의 수\n";
  happy.DataShow();

  Dog marry(5, 6);
  marry.DataShow();

  Dog nuri(7, 8);
  nuri.DataShow();

  cout << nuri.mari << endl;
  cout << Dog::mari << endl;

  system("PAUSE"); 
  return 0; 
}
