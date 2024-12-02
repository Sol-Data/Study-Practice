#include <iostream>
using namespace std;

int main()
{
  int x = 100; //변수 x에 100을 대입
  int *pt;     //포인터 변수 pt의 내용을 int 타입이라고 선언
  
  pt = &x;     //포인터 변수 pt에 변수 x의 주소값을 할당
  
  cout << "x의 메모리 시작 번지: " << pt << endl;
  cout << "pt의 메모리 시작 번지: " << &pt << endl;
  cout << "pt가 가리키는 메모리 번지에 저장된 데이터: " << *pt << endl;
  system("PAUSE");
  return 0;
}
