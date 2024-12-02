#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "1부터 9사이의 숫자를 입력하고 Enter키를 누르세요: "; 
    cin >> number; 
    switch(number) {
       case 1:
       case 3:
       case 5:
       case 7:
       case 9:   // number가 1 또는 3, 5, 7, 9 라면
          cout << "홀수입니다.\n"; 
          break;
    case 2:
       case 4:
       case 6:
       case 8:   // number가 2 또는 4, 6, 8 이라면
          cout << "짝수입니다.\n";
          break;
    } 

    system("PAUSE");
    return 0;
}
