#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};

class Mammal  // 기본 클래스
{
  public:
    void speak(int count) {cout << count << "번 울부짓다!\n";};
    void speak() {cout << "동물이 운다!\n";};   // 오버로딩
  protected: 
    int Age;
    int Weight;
};

class Dog:public Mammal  // 파생 클래스
{
  public:
    void wagTail() {cout << "꼬리를 흔들다!\n";};
    void speak() {cout << "멍멍 짓는다!\n";};   // 오버라이딩
  private:
    COLOR Color;
};

int main()
{
  Mammal dongmul;
  Dog happy;

  dongmul.speak();
  dongmul.speak(3);
  happy.speak(); // 파생 클래스 Dog의 speak()함수를 호출
  happy.Mammal::speak(5); // 기본 클래스의 함수를 호출

  system("PAUSE");
  return 0;
}
