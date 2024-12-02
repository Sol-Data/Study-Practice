#include <iostream>
using namespace std;

enum COLOR {BLACK, BLUE, GREEN, BROWN, YELLOW};

class Mammal
{
  public:
    void showData() {cout << "나  이: " << Age << endl;};
    void SetData(int age, int weight) {Age = age; Weight = weight;};
  protected:      // 파생 클래스에서는 공개, 외부 클래스에서는 비공개
    int Age;
    int Weight;
};

class Dog:public Mammal // 파생 클래스 정의
{
  public:
    void wagTail() { cout << "고리를 흔들다!\n"; };
    void Speak() { cout << "멍멍 짓는다!\n"; };
  private:
    COLOR Color;
};

class Cat:public Mammal // 파생 클래스 정의
{
  public:
    void wagTail() { cout << "고리를 세우다!\n"; };
    void Speak() { cout << "야옹!\n"; };
  private:
    COLOR Color;
};

class Pet:public Dog, public Cat  // 다중 파생 클래스
{
  public:
    void Show() { cout << "나이: " << Age << endl; };  // 오류! 
    void Speak() { cout << "야옹!\n"; };
  private:
    COLOR Color;
};

int main()
{
  Pet Pet;
  Pet.Show();

  system("PAUSE");
  return 0;
}
