#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "문자를 입력하세요 : ";
    cin >> ch;
    // 세 가지로 분리된 경우 조건이 맞으면 else 앞의 문장을 실행하고
    // if ~ else문을 벗어남
    if(ch == 'A' || ch == 'a')
       cout << "A이거나 a\n"; 
    else if(ch == 'D' || ch == 'd')
       cout << "D이거나 d\n";
    else if(ch == 'Y' || ch == 'y')
       cout << "Y이거나 y\n";      

    system("PAUSE");
    return 0;
}
