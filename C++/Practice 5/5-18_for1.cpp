#include <iostream>        
using namespace std;     

int main()                   
{                                        
  int sum = 0;
    
  for(int x = 1; x <= 100; x++)
     sum += x;
  cout << "1 + 2 + ... + 100 = " << sum << endl;
  
  system("PAUSE");  
  return  0;
}

