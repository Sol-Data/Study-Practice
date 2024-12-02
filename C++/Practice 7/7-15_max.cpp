#include <iostream>
using namespace std;

int max(int a, int b)    // 함수 정의, a와 b는 가 인수
{
  return a > b ? a : b;  // a가 b보다 크면 a를 반환
}

int main()
{
  int ret;
  ret = max(3, 5);  // 함수 호출, 3과 5는 실 인수
                    // 반환받은 결과를 ret에 저장
  cout << "최대값: " << ret << endl;

  system("PAUSE");
  return 0;
}
