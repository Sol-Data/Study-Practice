#include <iostream>
using namespace std;
#include <cstring>
#include <stdlib.h>

int main()
{
  int *ip;
  double *dp;

  ip = (int *)malloc(sizeof(int));
  dp = (double *)malloc(sizeof(double));
  // 리턴값을 검사하여 널 포인터인지 확인하는 루틴을 구현해야 안전하다.
  if(ip == NULL || dp == NULL)
  // 힙 영역에 원하는 크기의 메모리가 부족하면
  {
     cout << "메모리가 부족합니다!\n";
     exit(1);
  }
  else
  {
     *ip = 777;
     *dp = 3.14;
     cout << "ip 내용: " << *ip << endl;
     cout << "dp 내용: " << *dp << endl; 
     cout << "ip 주소: " << ip << endl;
     cout << "dp 주소: " << dp << endl;
  }
  free(ip);
  free(dp);
  // 메모리를 할당한다.
  int *pt = new int;
  *pt = 200; 
  cout << "pt 주소: " << pt << endl;
  cout << "pt 내용: " << *pt << endl;
  // 메모리를 해제한다.
  delete pt;
 
  system("PAUSE");
  return 0;  
}
