#include <iostream>
using namespace std;

template <class T>
T square(T x);

int main()
{
  int ir = square(8);  // T 타입이 int로 변경되면서 square함수를 실행
  double dr = square(6.5);  // T 타입이 double로 변경되면서 square함수를 실행

  cout << "squre(8) = " << ir << endl;
  cout << "squre(6.5) = " << dr << endl;

  system("PAUSE"); 
  return 0;
}

template <class T>  // 정수 타입 x
// 함수명 앞에서 템플릿을 선언하고, 데이터 타입은 T로 일반화한다.
T square(T x)
{
  return x * x;
}
