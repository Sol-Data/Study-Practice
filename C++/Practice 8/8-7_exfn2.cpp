#include <iostream>
using namespace std;

void data();
extern void stdata(int x);

int x = 7;
int y = 100;

int main()
{
  x = 9;
  cout << "main 함수 내의 x = " << x << "\n";
  data();
  cout << "함수 호출 후 y = " << y << endl; 
  system("PAUSE");
  return 0;
}     

void data()
{
  cout << "호출된 함수의 y = " << y << endl;
  stdata(35);
}
 
