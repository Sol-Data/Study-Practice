#include <iostream>
using namespace std;

int add(int x, int y); // 함수의 원형 선언

int main()
{
  int a = 3, b = 7, dap;
  dap = add(a, b);     // 함수 호출, a와 b는 실 인수
  cout << "3 + 7 = " << dap << endl;
  
  system("PAUSE");
  return 0;
}

int add(int x, int y)  // 함수 정의, x와 y는 가 인수
{
  int result;
  result = x + y;
  
  return result;
}

