#include <iostream>
using namespace std;

int main()
{
    int grade = 0;   // 성적변수
    
    cout << "성적 입력(100점 만점 단위): ";
    cin >> grade;    // 성적입력
    if(grade >= 90) cout << "A학점입니다.\n";
    else if(grade >= 80) cout << "B학점입니다.\n";
    else if(grade >= 70) cout << "C학점입니다.\n";
    else if(grade >= 60) cout << "D학점입니다.\n";
    else cout << "F학점입니다.\n";

    system("PAUSE");
    return 0;
}
