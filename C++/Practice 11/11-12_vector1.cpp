#include <iostream>
using namespace std;
#include <vector>

int main()
{
  const int size = 7;
  int element[] = {10,20,30,40,50,60,70};

  vector<int> gamok(size); // int 타입 요소가 7개인 벡터 객체 생성 
  
  vector<int> gamok2(element, element+size);
  //벡터 객체 gamok2를 생성하고, 
  //배열 element[0]~element[size-1]의 값으로 초기화

  for(int i = 0; i < gamok2.size(); i++)
    cout << gamok2[i] << "  ";
  cout << endl;

  system("PAUSE");
  return 0;
}
