#include <iostream>
using namespace std;

int main(void)
{
    int a;
    float b;
    double c;
    long double d;
    
    a = 1;
    b = 1.0;
    c = 1.0;
    d = 1.0;
    
    cout << "int a의 크기 : " << sizeof(a) << endl;
    cout << "float b의 크기 : " << sizeof(b) << endl;
    cout << "double c의 크기 : " << sizeof(c) << endl;
    cout << "long double d의 크기 : " << sizeof(d) << endl;
    
    system("pause");
    return 0;
}
    
