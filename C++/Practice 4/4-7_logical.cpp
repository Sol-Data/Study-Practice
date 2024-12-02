#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << "하나의 정수를 입력하세요: ";
  cin >> x;
  if(x >= 5 && x < 10)
     cout << "5 보다 크거나 같고 10 미만 " << endl;
  else
     cout << "다른 정수 " << endl;
  system("PAUSE");
  return  0;
}

