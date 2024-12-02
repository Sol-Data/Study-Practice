#include <iostream>
using namespace std;
void swap(int &x, int &y); // 함수의 원형 선언

int main()
{
  int x = 3, y = 7;
  
  cout << "swap 호출 전, x: " << x << " y: " << y << "\n";
  swap(x, y);            // 함수 호출, x와 y는 실 인수
  cout << "swap 호출 후, x: " << x << " y: " << y << "\n";

  system("PAUSE"); 
  return 0;
}

void swap(int &px, int &py)  // px와 py는 참조 변수 
{
  int temp;
  
  temp = px;
  px = py;
  py = temp;
}
