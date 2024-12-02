#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main()
{
  string cppStyle;
  char *cStyle[2];
  char temp[256];
  
  cout << "문자열을 입력하세요!\n";
  cin.getline(temp, 256);
  cStyle[0] = (char *)malloc(strlen(temp) + 1); // 메모리 할당
  strcpy(cStyle[0], temp);
  cout << cStyle[0] << endl;
  free(cStyle[0]);  // 할당받은 메모리를 해제하여 반환한다.
  
  cout << "문자열을 입력하세요!\n";
  getline(cin, cppStyle);
  cout << cppStyle << endl;
  
  // 동적 할당된 메모리에 연결할 포인터 배열
  long *pt = new long [10];
  *pt = 135792468;
  cout << "pt 주소: " << pt << endl;
  cout << "pt = " << *pt << endl;
  
  // 메모리를 해제한다.
  delete[] pt;
  pt = NULL;
  
  // pt에 보관된 주소값을 확인한다.
  cout << "pt = " << pt << "\n";
  
  // 메모리를 해제한다.
  delete[] pt;
  pt = NULL;
  
  system("PAUSE");
  return 0;  
}
