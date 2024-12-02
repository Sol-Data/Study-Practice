#include <iostream>        
using namespace std;
#include <iomanip>     

int main()                   
{                                        
  double d = 357.893;
  cout.setf(ios::fixed, ios::floatfield); //부동 소수점 표기
  cout.precision(3);  //소수점 이하 셋째자리, 고정 소수점 표기
  cout << d << endl;
  system("PAUSE");
  return  0;
}
