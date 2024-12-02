#include <iostream>
using namespace std;

template <class Type>
void Show(Type x)
{
  cout << x << endl;
}

int main()
{
  int data1 = 7;
  double data2 = 3.5;
  char *data3 = "Happy";
  char data4[] = "Vision";
  
  Show(data1);
  Show(data2);
  Show(data3);
  Show(data4);
  
  system("PAUSE");
  return 0;
}
