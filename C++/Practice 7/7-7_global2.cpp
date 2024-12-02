#include <iostream>
using namespace std;

void data();
void data2();

int main()
{
  int x = 0;  // 지역변수 x 선언 
  cout << "main() 함수 내의 지역변수 x = " << x << "\n";
  
  data();
  cout << "data() 함수 호출 후 지역변수 x = " << x << "\n\n";
  
  data2();
  cout << "data2() 함수 호출 후 지역변수 x = " << x << endl; 
  system("PAUSE");
  return 0;
}     

int x = 7;  // 전역변수 x 선언 

void data() 
{
  cout << "호출된 data() 함수의 전역변수 x = " << x << endl;
  x = 200;  // 전역변수 x의 값 변경 
}

void data2()
{
  cout << "호출된 data2() 함수의 전역변수 x = " << x << endl;
  x = 600;   // 전역변수 x의 값 변경 
}
