#include <iostream>
using namespace std;

int main()
{
  int x = 10;
  int y = 3;
  double div;
  cout << x/y << endl;   // 정수/정수의 연산 결과는 정수
  div = (double) x/y;    // 캐스트 연산자 사용
  cout << div << endl;
  system("PAUSE");
  return  0;
}

