#include <iostream>
using namespace std;

int square(int x);
double square(double d); 

int main()
{
  int ir = square(8);      // square(int x) 호출
  double dr = square(6.5); // square(double d) 호출
  
  cout << "squre(8) = " << ir << endl;
  cout << "squre(6.5) = " << dr << endl;

  system("PAUSE"); 
  return 0;
}

int square(int x)  // 정수 타입 x
{
  return x * x;
}

double square(double d) // 배정도 실수 타입 d
{
  return d * d;
}

