#include <iostream>
using namespace std;
#include <iomanip>

unsigned long factorial(unsigned long number);

int main()
{
  for(int i = 0; i <= 6; i++)
    cout << setw(2) << i << " != " << factorial(i) << endl;

  system("PAUSE"); 
  return 0;
}

unsigned long factorial(unsigned long number)
{
  if(number <= 1)
    return 1;
  else
    return number*factorial(number - 1);
}
