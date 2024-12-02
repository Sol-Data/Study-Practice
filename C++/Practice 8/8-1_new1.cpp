#include <iostream>
using namespace std;

int main()
{
  int *pt = new int;
  cout << "pt 주소: " << pt << endl;
  cout << "pt 주소: " << static_cast<void *>(pt) << endl;
  // 메모리에 값을 넣어본다.
  *pt = 123;
  
  cout << *pt << endl;
  // 사용이 끝난 메모리를 해제한다.
  delete pt;
  
  system("PAUSE");
  return 0;  
}

