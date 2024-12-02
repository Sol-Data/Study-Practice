#include <iostream>
using namespace std;

int add(int x, int y);

int main()
{
  int (*fp)(int x, int y); // 함수 포인터 변수 선언
  int a = 3, b =  7, dap;
  
  fp = add;       // 함수명을 함수 포인터 변수에 저장
  dap = fp(a, b);  // 함수 포인터 변수로 함수를 호출
  cout << "3 + 7 = " << dap << endl;
  
  system("PAUSE");  
  return 0;
}

int add(int x, int y)
{
  return x + y;
}
