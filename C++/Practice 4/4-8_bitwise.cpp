#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  a = 25;  b = 17;
  c = a & b;
  cout << "25(00011001) & 17(00010001) ==> " << c << '\n';
  c = a | b;
  cout << "25(00011001) | 17(00010001) ==> " << c << '\n';
  c = a ^ b;
  cout << "25(00011001) ^ 17(00010001) ==> " << c << '\n';
  c = ~a;
  cout << "~00011001=> 11100110=> 25에 대한 1의 보수 ";
  cout << c << endl;
  system("PAUSE");
  return 0;
}

