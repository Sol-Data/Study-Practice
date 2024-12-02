#include <iostream>
using namespace std;

void showData();  // 함수의 원형 선언

int main()
{
  showData();     // 함수 사용 (=함수 호출)

  system("PAUSE"); 
  return 0;
}

void showData()   // 함수 정의 (=함수 구현)
{
  cout << "말조심\n";
}

