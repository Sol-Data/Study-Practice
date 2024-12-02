#include <iostream>        
using namespace std;     
#define PAI       3.1415926
#define root(x)   ((x)) * ((x))
#define ADD(x,y)  (x + y)
#define OUTTEXT   cout << "Always for you"
#define OUT(message) cout << #message": " << message << "\n"

int main()                   
{                                        
  int x = 123;
  cout << "매크로 상수 출력: " << PAI << endl;
  cout << "5 * 5 = " << root(5) << endl;
  cout << "3 + 5 = " << ADD(3, 5) << endl;
  cout << "매크로 상수는 문자열에서 직접 출력 불가: OUTTEXT\n";
  OUT(x); // #인수(실매개변수)를 사용하면 문자열에서 출력 가능
  
  system("PAUSE");
  return  0;
}
