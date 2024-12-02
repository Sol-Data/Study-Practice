#include <iostream>
#include <iomanip>
using namespace std;

class Dog
{
 public:
  Dog(int age, int weight);
  void showData();
  static void showMari();    // 정적 멤버함수 선언 
 private:
  static int mari;           // 정적 멤버변수 선언 
  unsigned int Age;
  unsigned int Weight;
};

int Dog::mari = 0;   // 정적 멤버변수 mari를 클래스 외부에서 초기화 

Dog::Dog(int age, int weight)  // 매개변수가 있는 생성자 정의 
{
  Age = age;
  Weight = weight;

  mari++;   // 객체 수 카운트 
}

void Dog::showData()
{
  cout << setw(4) << Age;
  cout << setw(9) << Weight;
}

void Dog::showMari()
{
  cout << setw(9) << mari << endl;
}

int main()
{
  Dog happy(3, 4);
  cout << "나  이: 몸무게 : 개의 수\n";
  happy.showData();
  happy.showMari();

  Dog marry(5, 6);
  marry.showData();
  marry.showMari();
 
  Dog nuri(7, 8);
  nuri.showData();
  nuri.showMari();

  system("PAUSE"); 
  return 0; 
}
