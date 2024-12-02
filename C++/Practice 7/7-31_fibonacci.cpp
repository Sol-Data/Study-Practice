#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long);  // 함수의 원형

int main()
{
  unsigned long number;
  
  cout << "Enter an integer: ";
  cin >> number;
  for(int i = 0; i <= number; i++)
    cout << "Fibonacci(" << i << ") = " << fibonacci(i) << endl;

  system("PAUSE"); 
  return 0;
}

unsigned long fibonacci(unsigned long n)
{
  if(n == 0 || n == 1)
    return n;
  else
    return fibonacci(n - 1) + fibonacci(n - 2);
}

