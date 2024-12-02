#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};

class Mammal
{
  public:
    Mammal():Age(3), Weight(4) {}; // 생성자 초기화
    ~Mammal() {};
    void showData() {cout << Age << endl; cout << Weight << endl;};
    void SetData(int age, int weight) {Age = age; Weight = weight;};
    void speak() {cout << "동물이 운다!\n";};
  protected: // 파생 클래스에서는 공개, 외부 클래스에서는 비공개
    int Age;
    int Weight;
};

class Dog:public Mammal
{
  public:
    Dog():Color(YELLOW) {};
    ~Dog() {};
    COLOR getColor() const {cout << Color << endl; return Color;};
    void setColor(COLOR color) {Color = color;};
    void wagTail() {cout << "꼬리를 흔들다!\n";};
    void speak() {cout << "멍멍 짓는다!\n";};
  private:
    COLOR Color;
};

int main()
{
  Mammal dongmul;
  Dog happy;
  
  dongmul.speak();
  happy.speak();
  
  system("PAUSE");
  return 0;
}
