#include <iostream>
#include <cstring>
using namespace std;

void usingArray(const char arr[], int n); // 배열을 인자로 갖는 함수의 원형

int main()
{
  char str[] = "Hello";
  usingArray(str, strlen(str));
  cout << "In main() : " << str << "\n";

  system("PAUSE");
  return 0;
}

void usingArray(const char arr[], int n)
{
  for(int i = 0; i < n; i++)
    cout << arr[i];
  cout << endl;
}

