#include <iostream>
using namespace std;

extern int y;
void data(int x)
{
  y = y + 35;
  cout << "외부 파일에서 가져온 외부 변수 y = " << y << endl;
  x = 20;
}
 
