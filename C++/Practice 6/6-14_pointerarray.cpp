#include <iostream>
using namespace std;

int main()
{
  int array[3] = {5, 10, 15};
  int *pt;
  
  pt = array;
  
  cout << pt[0] << " " << pt[1] << " " << pt[2] << endl;
  cout << array[0] << " " << array[1] << " " << array[2] << endl;
  cout << *array << " " << *(array+1) << " " << *(array+2) << endl;
  // cout << *pt << " " << *(pt+1) << " " << *(pt+2) << endl;
  system("PAUSE");
  return 0;
}
