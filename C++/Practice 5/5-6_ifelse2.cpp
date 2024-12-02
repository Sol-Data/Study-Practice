#include <iostream>
using namespace std;

int main()
{
  int year;
  cout << "년도를 네자리 수로 입력하세요 : "; 
  cin >> year;
  if(year % 4 == 0 && year % 100 != 0 || (year % 400) == 0)
     cout << year << "는 윤년입니다.\n";
  else
     cout << year << "는 윤년이 아닙니다. \n";

  system("PAUSE");
  return 0;
}
