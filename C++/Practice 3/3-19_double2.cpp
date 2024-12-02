#include <iostream>        
using namespace std;     
#include <iomanip>

int main()                   
{                                        
  double d = 1234.56789;
  cout << d;     // 잘못된 결과 출력, 1234.57로 반올림된 수 출력
  cout << setw(15) << setiosflags(ios::scientific) << d
       << endl;  // 지수형태로 표기하기
  cout.setf(ios_base::fixed, ios_base::floatfield);
                 // 부동 소수점 표기하기
  cout.precision(5);  // 소수점 이하 다섯자리, 고정 소수점 표기
  cout << d << endl;
  
  system("PAUSE");
  return  0;
}
