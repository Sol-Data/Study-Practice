#include <iostream>
using namespace std;

int main()
{
   char ch;
   int i;
   cout << "문자 하나를 입력하고 Enter를 누르세요!\n";
   cin >> ch;
   i = ch;
   cout << "입력한 문자: " << ch << endl;
   cout << "입력한 문자의 아스키 코드: " << i << endl;
   ch = ch + 2;
   cout << ch << endl;
   
   return 0;
}