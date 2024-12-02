#include <iostream>
using namespace std;

void usingArray(char arr[]); // 배열을 인자로 갖는 함수의 원형

int main()
{
  char str[] =  "Hello, World!";
  usingArray(str);
  cout << "In main() : " << str << "\n";

  system("PAUSE");
  return 0;
}

void usingArray(char arr[])
{
  cout << arr << "\n";
  arr[10] = 'T';
  arr[11] = 'C';
}

