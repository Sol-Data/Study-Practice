#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int mul = 1;
  int x, y;
  for(x = 2; x <= 9; x++) {
     for(y = 1; y <= 9; y++) {
        mul = x * y;
        cout << setw(1) << x << "*" << y << "="
             << setw(2) << mul << " ";
     }
  cout << endl;
  }
  
  system("PAUSE");  
  return 0;
}

