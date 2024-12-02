#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << "0 이나 1을 입력하세요: ";
  cin >> x;

  if(x==0)
    cout << "10 / 3 = " << 10 / 3 << endl;
  else
    cout << "10 % 3 = " << 10 % 3 << endl;

  system("PAUSE");
  return  0;
}
