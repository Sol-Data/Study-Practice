#include <iostream>
using namespace std;

int main()
{
  char op;
  float num1, num2;  
  
  cout << "사칙연산 문장을 다음과 같이 3개의 항목으로 입력하세요!\n";
  cout << "상수1,산술연산자(+,-,*,/)중 하나,상수2를 입력하세요.\n";
  cin >> num1 >> op >> num2;
  if(op == '+')  cout << num1 + num2 << endl;
  else if(op == '-')  cout << num1 - num2 << endl; 
  else if(op == '*')  cout << num1 * num2 << endl;
  else if(op == '/')  cout << num1 / num2 << endl;
  else cout << "잘못 입력했습니다!\n"; 

  system("PAUSE");
  return 0;
}
