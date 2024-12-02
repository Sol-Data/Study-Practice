#include <iostream>
using namespace std;

extern int y;

void stdata(int x)
{
  y = y + 35;
  cout << y << "+ 35 = " << y << endl;
  x = 20;
}
 
