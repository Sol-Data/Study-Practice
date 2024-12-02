#include <iostream>
using namespace std;

void chonge(int *p);

int main()
{
  int x = 1004;
  
  chonge(&x);
  cout << "chonge() 함수 호출 후 변수 x의 값 : " << x << endl;
  system("PAUSE");  
  return 0;
}

void chonge(int *p)
{
  cout << "chonge() 함수 : " << *p << endl;
  *p = 375;
}
