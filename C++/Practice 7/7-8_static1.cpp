#include <iostream>
using namespace std;

void data();
int x = 7;

int main()
{
  int x = 3;  // 지역변수 x
  int y = 0;
  cout << "main 함수 내의 x = " << x << "\n";
  
  data();
  cout << "함수 호출 후 x = " << x << endl;
  cout << "함수 호출 후 y = " << y << endl; 
  data();
  system("PAUSE");  
  return 0;
}     

void data()
{
  int y = 20;
  static int x = 10;
  
  cout << "호출된 data 함수의 x = " << x << endl;
  cout << "호출된 data 함수의 y = " << y << endl;
  
  x = 100;
  y = 200;
}
