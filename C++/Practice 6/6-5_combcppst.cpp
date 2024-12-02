#include <iostream>
#include <string>
using namespace std;

int main()
{
   string cppStyle;  // string 객체 변수 생성 
   char cStyle[256]; // 문자배열 변수 생성 
   
   cout << "문자열을 입력하세요!\n";
   cin.getline(cStyle, 256); // 입력받은 내용을 문자배열 변수에 저장
   
   cout << "문자열을 입력하세요!\n";
   getline(cin, cppStyle); // 입력받은 내용을 string 객체 변수에 저장 

   cout << cStyle << endl;
   cout << cppStyle << endl;
 
   system("PAUSE");
   return 0;
}
