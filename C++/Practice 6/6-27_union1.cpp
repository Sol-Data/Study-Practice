#include <iostream>
using namespace std;

union number {
  int x;
  double y;
};

int main()
{
  union number value; // 공용체 변수 선언
  value.x = 56;
  
  cout << "x value: " << value.x << endl;
  value.y = 35.78;
  cout << "y value: " << value.y << endl;
  cout << "x value: " << value.x << endl;

  system("PAUSE");
  return 0;
}
