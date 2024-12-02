#include <iostream>
using namespace std;

int main()
{
    int x;
    
    cout << "정수를 입력하세요 : ";
    cin >> x;
    
    if(x <= 100)   // x가 100보다 같거나 작으면 
       cout << "100보다 작거나 같은 정수" << endl;  

    system("PAUSE");
    return 0;
}
