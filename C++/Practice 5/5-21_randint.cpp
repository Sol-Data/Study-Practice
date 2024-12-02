#include <iostream> // cout 사용 
#include <cstdlib>  // srand(), rand() 사용 
#include <iomanip>  // setw() 사용 
#include <ctime>    // time() 사용 
using namespace std;

int main()
{
  srand(time(0));   // 컴퓨터 자체의 clock을 읽어 난수를 생성
  for(int i = 1; i < 11; i++) {
     cout << setw(5) << (1 + rand() % 7);
     if(i % 5 == 0) // 한 줄에 5개씩 출력
        cout << endl;
  }
  cout << endl;
  
  system("PAUSE");
  return 0;
}

