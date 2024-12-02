#include <iostream>        
using namespace std;     

int main()                   
{                                        
  int sum = 0;
  int x = 0;
  do {
      sum += x;
      x++;
  }while(x <= 100);  // x가 100보다 작거나 같을 때까지 
                     // { }속 문장들을 반복 실행
  cout << "1 + 2 + ... + 100 = " << sum << endl; 
  
  system("PAUSE");  
  return  0;
}

