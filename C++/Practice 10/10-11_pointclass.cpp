#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};

// 기본 클래스에서 사용할 함수를 파생 클래스에서 재정의하여 사용하려면
// 함수명 앞에 virtual을 붙여야 한다.
class Mammal    // 기본 클래스
{
  public:
    void speak(int count) {cout << count << "번 울부짓다!\n";};
    virtual void speak() {cout << "동물이 운다!\n";};
  protected: 
    int Age;
    int Weight;
};

class Dog:public Mammal
{
  public:
    void wagTail() {cout << "꼬리를 흔들다!\n";};
    void speak() {cout << "멍멍 짓는다!\n";};
  private:
    COLOR Color;
};

int main()
{
  Mammal *pt;
  Dog happy;
  pt = &happy;

  pt->speak();  // 가상 함수를 사용했으므로 Dog의 speak()를 호출한다.
  pt->speak(5); // 기본 클래스의 객체에 대한 멤버 함수를 호출

  system("PAUSE");
  return 0;
}
