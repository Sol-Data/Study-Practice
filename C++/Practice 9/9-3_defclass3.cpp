#include <iostream>
using namespace std;

class Dog
{
 public: 
  unsigned int GetAge(){return Age;};
  // 멤버 함수의 선언과 정의를 포함한다. 
  void SetAge(unsigned int age){Age = age;};
  // 멤버 함수의 선언과 정의를 포함한다. 
  void Show(){cout << "행복한 순간 \n";};
 private:
  unsigned int Age;
  unsigned int Weight;
};

int main()
{
  Dog happy;
  happy.SetAge(3);
  cout << "happy의 나이는 " << happy.GetAge() << "입니다.\n";

  system("PAUSE");
  return 0; 
}
