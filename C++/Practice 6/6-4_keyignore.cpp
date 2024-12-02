#include <iostream>
#include <string>
using namespace std;

int main()
{
    char cStyle[256];

    cout << "문자열을 입력하세요!\n";
    cin.get(cStyle, 256);  // 한 라인을 읽고  개행 문자는 입력 스트림에 남긴다.
    cout << cStyle << endl;
      
    cin.ignore(256, '\n'); // 개행문자 값을 삭제 
    cout << "문자열을 입력하세요!\n";
    cin.getline(cStyle, 256);
    cout << cStyle << endl; 
    
    system("PAUSE");   
    return 0;
}
