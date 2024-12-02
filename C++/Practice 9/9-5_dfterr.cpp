#include <iostream>
using namespace std;

class Dog
{
 public:
  void DataShow();
 private:    // 멤버변수 Age와 Weight는 비공개로 선언됨 
  unsigned int Age;
  unsigned int Weight;
};

void Dog::DataShow()
{
  cout << "happy의 나이는 " << Age << "입니다.\n";
  cout << "happy의 몸무게는 " << Weight << "입니다.\n";
}

int main()
{
  Dog happy = {3, 4}; // 컴파일시 오류가 발생한다. 
  happy.DataShow();

  system("PAUSE");
  return 0; 
}
