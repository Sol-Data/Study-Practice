#include <iostream>
using namespace std;

int main()
{
   float y = 65.0;
   char ch = 'B';
   cout << "문자: " << ch << endl;
   cout << "아스키 코드: " << (int) ch << endl;
   cout << "문자: " << char(y) << endl;
   cout << "(char) y : " << (char) y << endl;
   cout << "float(ch): " << float(ch) << endl;
   cout << "int(ch): " << int(ch) << endl;
   system("PAUSE");
   return 0;
}
