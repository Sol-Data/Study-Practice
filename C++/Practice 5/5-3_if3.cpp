#include <iostream>
using namespace std;

int main()
{
    int x;
    
    cout << "정수를 입력하세요 : ";
    cin >> x;
    if(x < 100 && x > 0)   // x가 100보다 작고 0보다 크면
       cout << "0 < x < 100 범위의 정수" << endl; 

    system("PAUSE");
    return 0;
}
