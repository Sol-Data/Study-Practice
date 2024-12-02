#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};

class Mammal  // 기본 클래스
{
  public:
    void speak(int count) {cout << count << "번 울부짓다!\n";};
    void speak() {cout << "동물이 운다!\n";};    // 오버로딩 
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
  happy.speak();
  happy.speak(5);   // 이 부분을 생략하면 정상 동작한다.
   
  system("PAUSE");
  return 0;
}
