#include <iostream>
using namespace std;

// 함수가 사용되기 앞서 정의된 경우에는 
// 함수의 원형을 선언할 필요가 없다.

int Three()   //함수 정의
{  
  return 3;
}

int main()
{
  int ret;
  ret = Three();
  cout << "함수를 호출하고 반환하는 값: " << ret << "\n";

  system("PAUSE");   
  return 0;
}
