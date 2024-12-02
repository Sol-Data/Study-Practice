#include <iostream>
#include <string>
using namespace std;

int main()
{
    char cStyle[256];
    
    cout << "문자열을 입력하세요!\n";
    cin.get(cStyle, 256);
    cout << cStyle << endl;
    
    cout << "문자열을 입력하세요!\n";
    cin.getline(cStyle, 256);
    cout << cStyle << endl; 
    system("PAUSE");   
    return 0;
}
