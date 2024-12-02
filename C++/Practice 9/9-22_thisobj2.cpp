#include <iostream>
using namespace std;

class Dog
{
  public:
    unsigned int GetAge() {return Age;};
    void SetAge(unsigned int Age);

  private:
    unsigned int Age;
    unsigned int Weight;
};

void Dog::SetAge(unsigned int Age)
{
  this->Age = Age; // 멤버변수 this->Age와 지역변수 Age를 구분
}

int main()
{
  Dog happy;
  happy.SetAge(3);
  cout << "happy의 나이는 " << happy.GetAge() << "입니다.\n";
  
  system("PAUSE");
  return 0;
}
