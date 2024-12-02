#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "문자를 입력하세요 : ";
    cin >> ch;
    if(ch >= 'A' && ch <= 'Z') // ch의 문자가 A~Z이면
       cout << "대문자입니다." << endl;
    else                       // ch의 문자가 A~Z가 아니면 
       cout << "소문자입니다." << endl; 

    system("PAUSE");
    return 0;
}
