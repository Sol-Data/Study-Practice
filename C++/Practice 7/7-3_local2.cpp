#include <iostream>
using namespace std;

int main()
{
  int x;  // x는 지역변수 
    
  for(x = 1; x < 5; x++) {
    int count = 0;   // count는 지역변수 
    count++;
    cout << "x = " << x;
    cout << " count = " << count << endl;
  }
  cout << "for문 { } 밖의 x = " << x << endl;
  system("PAUSE");
  return 0;
}     
