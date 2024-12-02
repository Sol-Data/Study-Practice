#include <iostream>
using namespace std;

int add(int x, int y)
{
  return x + y;
}

double add(double x, double y)
{
  return x + y;
}

int main()
{
  cout << add(5, 7) << endl;
  cout << add(2.5, 3.1) << endl;
  
  system("PAUSE");
  return 0;
}
  
