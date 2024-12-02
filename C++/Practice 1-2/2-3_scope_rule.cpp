#include <iostream>
using namespace std;

int x = 5;   // 전역변수 x

int main()
{
    int y = 10;  // 지역변수 y 
    
    cout << "x=" << x << ", y=" << y << endl;
    {
         int x = 500, y = 200;   // 지역변수 x, y 
         cout << "x=" << x << ", y=" << y << endl;
    }
    int x = 50;  // 지역변수 x 
    cout << "x=" << x << ", y=" << y << endl;
    system("PAUSE");
    return 0;
}
         
