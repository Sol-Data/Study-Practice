#include <iostream>
using namespace std;

// 템플릿 선언 - 데이터 타입은 결정되 않고 Type으로 일반화한다.
template <class Type>
// Type은 호출한 함수의 인자에 맞도록 타입을 설정한다.
Type add(Type x, Type y)
{
  return x + y;
}

int main()
{
  cout << add(5, 7) << endl;
  cout << add(2.5, 3.1) << endl;
  
  system("PAUSE");
  return 0;
}
  
