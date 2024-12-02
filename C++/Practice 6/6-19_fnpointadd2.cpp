#include <iostream>
using namespace std;

int add(int x, int y);
int mult(int x, int y);
void fn(int (*fp)(int x, int y));

int main()
{
  fn(add);
  fn(mult);

  system("PAUSE");  
  return 0;
}

void fn(int (*fp)(int x, int y))
{
  int a = 3, b = 7, dap;
  dap = fp(a, b);
  cout << "°á°ú = " << dap << endl;
}

int add(int x, int y)
{
  return x + y;
}

int mult(int x, int y)
{
  return x * y;
}
