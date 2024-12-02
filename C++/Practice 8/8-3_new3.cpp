#include <iostream>
using namespace std;

int main()
{
  // 메모리를 할당한다.
  int *pt = new int[10];
  *pt = 200;

  cout << "pt 주소: " << pt << endl;
  cout << "pt 주소: " << static_cast<void *>(pt) << endl;
  cout << "pt = " << *pt << endl;
  // 메모리를 해제한다.
  delete[] pt;
 
  system("PAUSE");
  return 0;  
}
