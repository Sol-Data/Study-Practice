#include <iostream>
using namespace std;

int main()
{
  const int size = 10;
  // 필요한 만큼의 동적 메모리를 할당한다.
  int *arr = new int [size];
  
  for(int i = 0; i < size; ++i)
  {
    arr[i] = i + 1;
  }
  // 평균을 계산하고 출력한다.
  int sum = 0;
  for(int i = 0; i < size; ++i)
  {
    sum += arr[i];
  }
  float ave = (float)sum / (float)size;
  cout << "합 = " << sum << ", 평균 = " << ave << "\n";
  
  // 사용한 메모리를 해제한다.
  delete[] arr;
  
  system("PAUSE");
  return 0;  
}
