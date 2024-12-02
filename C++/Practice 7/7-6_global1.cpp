#include <iostream>
using namespace std;

void data(); // 함수의 원형
int x = 7; // 전역변수 x
 
int main()
{
  x = 3; // 전역변수 x에 3을 대입
  cout << "main 함수 내의 전역변수 x = " << x << "\n";
  
  data();  // 함수 호출
  cout << "함수 호출 후 전역변수 x = " << x << endl; 
  system("PAUSE");  
  return 0;
}     

void data()
{
  int x = 567;  // 지역변수 x 선언
  // 지역변수와 전역변수가 같은 이름일 경우 지역변수가 해당 지역 내에서
  // 우선 적용된다.
  cout << "호출된 data()함수 내의 지역변수 x = " << x << endl;
  x = 100;  // 지역변수 x에 대입된 100 값은 이 블록을 벗어나면서 
            // 지역변수 x의 소멸과 함께 사라진다. 
}
