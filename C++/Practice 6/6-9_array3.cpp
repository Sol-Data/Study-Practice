#include <iostream>
using namespace std;

int main()
{
   int a[5] = {6, 7, }; 
   // 7다음의 콤마(,)를 적으면,  초기값을 지정하지 않은 
   // 나머지 배열 요소는 모두 0으로 초기화 한다.  
   int b[5] = {0}; // 배열 b의 모든 요소를 0으로 초기화
   for(int i=0; i < 5; i++)
   {
      cout << "a[" << i << "] = " << a[i] << " ";
      cout << "b[" << i << "] = " << b[i] << endl;
   }
   system("PAUSE");
   return 0;
}
