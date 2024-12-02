#include <iostream>        
using namespace std;     
#include <iomanip>

int main()                   
{                                        
  cout.setf(ios::fixed, ios::floatfield); // 부동 소수점 출력
  cout.setf(ios::left, ios::adjustfield); // 왼쪽 정렬
  cout.setf(ios::showpos);  // + 기호를 붙여서 출력
  cout.precision(3);        // 정밀도 세자리
  double d = 10.0 / 3.0;
  cout.width(30);           // 자릿수 30칸 지정
  cout << d << endl; 
  
  system("PAUSE");
  return  0;
}
