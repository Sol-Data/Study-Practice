#include <iostream>
using namespace std;

class Dog
{
  public:
    unsigned int GetAge() {return Age;};
    void SetAge(unsigned int Age);
    static void testAge(unsigned int Age); // 정적 멤버 함수
    void Show();
  private:
    unsigned int Age;
    unsigned int Weight;
};

void Dog::SetAge(unsigned int Age)
{
  this->Age = Age; // 멤버변수 this->Age와 지역변수 Age를 구분
}

void Dog::testAge(unsigned int age)
{
  this->Age = Age; // 오류! - 정적 멤버 함수는 this 포인터 사용 불가
}
  

void Dog::Show()
{
  cout << "행복한 순간\n";
}

int main()
{
  Dog happy;
  happy.SetAge(3);
  cout << "happy의 나이는 " << happy.GetAge() << "입니다.\n";
  
  system("PAUSE");
  return 0;
}
