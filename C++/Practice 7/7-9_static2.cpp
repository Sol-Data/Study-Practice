#include <iostream>
using namespace std;

void data();
static int x = 7;

int main()
{
  cout << "main 함수 내의 x = " << x << "\n";
  data();
  cout << "함수 호출 후 x = " << x << endl; 
  system("PAUSE");  
  return 0;
}     

void data()
{
  x = 100;
  cout << "호출된 data 함수의 x = " << x << endl;
  x = 200;
}
 
