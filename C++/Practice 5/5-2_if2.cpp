#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "두 개의 정수를 입력하세요!\n";
    cout << "정수를 입력하고 Enter키를 누르세요: "; cin >> x; 
    cout << "정수를 입력하고 Enter키를 누르세요: "; cin >> y;
    if(x>y)  // x가 y보다 크면 { } 안의 문장들을 실행
    {
       cout << "대한민국 ";
       cout << "만세!\n";
    }    

    return 0;
}
