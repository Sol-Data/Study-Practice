#include <iostream>
using namespace std;

int main()
{
  int sum = 0, sub = 20, mul = 1, div = 10;

  sum += 3;
  sub -= 5;
  mul *= 6;
  div /= 7;
  cout << "sum += 3 ==> sum = sum + 3 : " << sum << "\n";
  cout << "sub -= 5 ==> sub = sub - 5 : " << sub << "\n";
  cout << "mul *= 6 ==> mul = mul * 6 : " << mul << "\n";
  cout << "div /= 7 ==> div = div / 7 : " << div << "\n";
  
  system("PAUSE");
  return  0;
}

