#include <iostream>
using namespace std;

int main()
{
  int x = 3;
  // 지역변수 x, 
  // 함수 내부 { }에서 선언했으므로 이 위치부터 함수의 끝까지 유효하다.
  cout << "main 함수 내의 x = " << x << "\n";
    
  x = 200;
  cout << "x = " << x << endl;
  system("PAUSE");
  return 0;
}
 
