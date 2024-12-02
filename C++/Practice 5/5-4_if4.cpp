#include <iostream>
using namespace std;

int main()
{
    char ch;
    
    cout << "문자를 입력하세요 : ";
    cin >> ch;         // 키보드로부터 입력받은 문자를 ch에 저장
    
    if(ch >= 'A' && ch <='Z') // ch에 저장된 문자값이 A~Z이면
       cout << "대문자입니다." << endl; 

    system("PAUSE");
    return 0;
}
