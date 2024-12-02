#include <iostream>
using namespace std;

int x = 100;   // 전역 변수
int main()
{
  int x = 10;  // 지역 변수
  int y = 3;   // 지역 변수

  cout << "지역 변수 x = " << x << endl;
  cout << "지역 변수 y = " << y << endl;
  cout << "전역 변수 x = " << ::x << endl;
  x = y + ::x;
  cout << "지역 변수 x = " << x << endl;
  system("PAUSE");
  return  0;
}

