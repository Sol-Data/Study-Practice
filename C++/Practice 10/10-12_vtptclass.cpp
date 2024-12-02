#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};

class Mammal             // 기본 클래스
{
  public:
    void speak(int count) {cout << count << "번 울부짓다!\n";};
    virtual void speak() {cout << "동물이 운다!\n";};
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

void showData(Mammal &ref)  // 참조 - 함수명(객체명 &매개변수)
{
  ref.speak();
}

int main()
{
  Dog happy;      // 파생 클래스의 객체를 생성
  Mammal mammal;  // 기본 클래스의 객체를 생성
  
  showData(mammal); // 기본 클래스의 객체를 인자로 사용
  showData(happy);  // 파생 클래스의 객체를 인자로 사용

  system("PAUSE");
  return 0;
}
