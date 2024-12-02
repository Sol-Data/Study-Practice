#include <iostream>        
using namespace std;     

int main()                   
{                                        
  double sum = 0.0;
  double x;
    
  cout << "정수나 실수를 입력하세요. \n";
  cout << "합계를 끝내려면 정수나 실수이외의 데이터를 입력하세요!\n";
  while(cin >> x) {
     sum += x;
  }
  cout << "마지막에 입력한 상수: " << x << endl;
  cout << "합계 = " << sum << endl;
 if(cin.fail() && !cin.bad()) {
    cin.clear();
    while(!isspace(cin.get()))
       continue;
 }
 else {
    cout << " 잘못 입력한 것 -- ";
    cout << " 바로 전의 데이터까지만 합계 냅니다.";
    cout << " 상수 하나만 더 받고 끝낼 것입니다...\n";
    exit(1);
 }
  
 system("PAUSE");        
 return 0;
}

