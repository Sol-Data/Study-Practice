#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};

class Mammal
{
  public:
    Mammal();
    ~Mammal();
    void showData();
    void SetData(int age, int weight) {Age = age; Weight = weight;};
  protected: // 파생 클래스에서는 공개, 외부 클래스에서는 비공개
    int Age;
    int Weight;
};

Mammal::Mammal():Age(3), Weight(4)
{
  cout << "--- Mammal 생성자 호출 ---\n";
}

Mammal::~Mammal()
{
  cout << "--- Mammal 소멸자 호출 ---\n";
  system("PAUSE");
}

void Mammal::showData() // 멤버 함수의 정의
{
  cout << "나  이: " << Age << endl;
  cout << "몸무게: " << Weight << endl;
}

class Dog:public Mammal
{
  public:
    Dog():Color(YELLOW) {cout << "--- Dog 생성자 호출 ---\n";};
    ~Dog(){cout << "--- Dog 소멸자 호출 ---\n";};
    COLOR getColor() const {cout << Color << endl; return Color;};
    void SetColor(COLOR color) {Color = color;};
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

  return 0;
}
