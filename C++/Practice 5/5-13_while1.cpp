#include <iostream>        
using namespace std;     

int main()                   
{                                        
  int sum = 0;
  int x = 0;
    
  while(x <= 100) // x가 100보다 작거나 같으면 {}안을 반복 실행
  {
      sum += x;
      x++;
  }
  cout << "1 + 2 + ... + 100 = " << sum << endl;
                    
  system("PAUSE");
  return  0;
}

