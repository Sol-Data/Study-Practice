#include <iostream>
using namespace std;
void show(int p[]);  // 함수의 원형, 첨자 생략 

int main(void)
{
   int a[] = {4,5,6};
   
   show(a); // show() 함수를 호출하면서 
            // a 배열의 시작 주소를 p에게 전달
   system("PAUSE");
   return 0;
}

void show(int p[])
{
  for(int i = 0; i < 3; i++)
  {
    cout << "P[" << i << "]번지" << p + i << "   ";
    cout << "p[" << i << "] = " << p[i] << endl;
  }
}

