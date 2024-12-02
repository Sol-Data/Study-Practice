#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};

class Mammal             // 기본 클래스
{
  public:
    void speak(int count) {cout << count << "번 울부짓다!\n";};
    void speak() {cout << "동물이 운다!\n";};
  protected: 
    int Age;
    int Weight;
};

class Dog:public Mammal  // 파생 클래스 Dog
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
  
  pt->speak(); // 잘못된 호출, 기본 클래스의 speak()를 호출
  pt->speak(5); // 기본 클래스의 객체에 대한 멤버 함수를 호출

  system("PAUSE");
  return 0;
}
