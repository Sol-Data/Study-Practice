#include <iostream>
using namespace std;

int main()
{
  int x, y, max;
  cout << "두 개의 정수 값을 입력하고 Enter키를 누르세요 : ";
  cin >> x >> y;
  max = (x > y) ? x : y;
  cout << "최대값 : " << max << endl;
  system("PAUSE");
  return  0;
}

