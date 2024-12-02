#include <iostream>
using namespace std;

int main()
{
    char ch;
    
    cout << "문자를 입력하고 Enter키를 누르세요: ";  
    cin >> ch; 
    switch(toupper(ch)) // ch의 문자를 대문자로 변환한 문자가
    {
       case 'A':        // A 문자이면
          cout << "A\n";
          break;
       case 'E':        // E 문자이면
          cout << "E\n";
          break;
       case 'I':        // I 문자이면
          cout << "I\n";
          break;
       case 'O':        // O 문자이면
          cout << "O\n";
          break;
       case 'U':        // U 문자이면
          cout << "U\n";
          break;
       default:    // 위 문자(A, E, I, O, U) 이외의 문자라면    
          cout << "자음입니다.\n";
          break;
    }                                

    system("PAUSE");
    return 0;
}
