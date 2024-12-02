#include <iostream>
using namespace std;

int main()
{
  int add, sub, mult, mod, x, y;
  double div;
  x = 3;
  y = 7;
  add = x + y;
  sub = y - x;
  mult = x * y;
  div = (double) y / (double) x;
  mod = y % x;

  cout << x << " + " << y << " = " << add << endl;
  cout << y << " - " << x << " = " << sub << endl;
  cout << x << " * " << y << " = " << mult << endl;
  cout << y << " / " << x << " = " << div << endl;
  cout << y << " % " << x << " = " << mod << endl;

  system("PAUSE");
  return  0;
}

