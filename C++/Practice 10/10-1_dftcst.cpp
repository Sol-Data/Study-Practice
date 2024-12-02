#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};
// 색상을 열거형으로 선언

class Mammal
{
  public:
    Mammal():Age(3), Weight(4) {}; // 생성자 초기화
    ~Mammal() {};                  // 소멸자
    
    void showData();
    void SetData(int age, int weight) {Age = age; Weight = weight;};
  protected: // 파생 클래스에서는 공개, 외부 클래스에서는 비공개
    int Age;
    int Weight;
};

void Mammal::showData() // 멤버 함수의 정의
{
  cout << "나  이: " << Age << endl;
  cout << "몸무게: " << Weight << endl;
}

class Dog:public Mammal // 파생 클래스 정의
{
  public:
    Dog():Color(YELLOW) {}; // 생성자 초기화
    ~Dog() {};
    COLOR getColor() const {cout << Color << endl; return Color;};
    void setColor(COLOR color) { Color = color; };
    void wagTail() { cout << "고리를 흔들다!\n"; };
    void speak() { cout << "멍멍 짓는다!\n"; };
  private:
    COLOR Color;
};

int main()
{
  Dog happy;
  
  happy.showData();
  happy.speak();
  happy.getColor();

  system("PAUSE");
  return 0;
}
