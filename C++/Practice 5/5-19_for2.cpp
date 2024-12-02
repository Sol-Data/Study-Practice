#include <iostream>        
using namespace std;     

int main()                   
{                                        
  int sum = 0;
    
  for(int x = 100; x > 0; x -= 2) 
     sum += x;
  cout << "100 + 98 + 96 + ... + 4 + 2 = " << sum << endl;
  
  system("PAUSE");  
  return  0;
}

