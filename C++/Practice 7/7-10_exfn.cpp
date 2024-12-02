#include <iostream>
using namespace std;

extern void data(int x);
int x = 7;
int y;

int main()
{
  x = 9;
  cout << "main 함수 내의 x = " << x << endl;
  
  data(100);
  cout << "외부 파일의 함수 호출 후 y = " << y << endl; 
  system("PAUSE");  
  return 0;
}     

