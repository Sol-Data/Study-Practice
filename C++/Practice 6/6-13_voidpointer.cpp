// void * 타입 포인터 사용하기 
#include <iostream>
using namespace std;

void iswap(void *px, void *py);
void dswap(void *px, void *py);

int main()
{
  int x = 3, y = 7;
  double dx = 2.4, dy = 77.88;
  
  cout << "swap 호출 전, x: " << x << " y: " << y << "\n";
  iswap(&x, &y);  // 변수 x, y의 주소를 실인수로 지정 (call by ref) 
  cout << "swap 호출 후, x: " << x << " y: " << y << "\n";

  cout << "swap 호출 전, dx: " << dx << " dy: " << dy << "\n";
  dswap(&dx, &dy);
  cout << "swap 호출 후, dx: " << dx << " dy: " << dy << "\n";
  system("PAUSE");
  return 0;
}

void iswap(void *px, void *py) // 함수 호출시 주소를 넘겨받기 위해 void *포인터로 가인수 지정   
{
  int temp;
  temp = *(int *)px; // int * 형식으로 캐스트 변환하여 대입 변환
  *(int *)px = *(int *)py;
  *(int *)py = temp;
}

void dswap(void *px, void *py)
{
  double temp;
  temp = *(double *)px; // double * 형식으로 캐스트 변환하여 대입 변환
  *(double *)px = *(double *)py;
  *(double *)py = temp;
}
