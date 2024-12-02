#include <iostream>
using namespace std;
#include <iterator>

int main()
{
  int number1, number2;
  cout << "두 개의 정수 입력: ";
  // 키보드에서 읽어들이기 위한 cin용 istream_iterator 반복자 생성
  istream_iterator<int> input(cin);

  number1 = *input; //표준 입력인 키보드에서 첫 번째 정수를 입력
  ++input;
  number2 = *input; //표준 입력인 키보드에서 두 번째 정수를 입력

  // 화면에 출력하기 위한 cout용 ostream_iterator 반복자 생성
  ostream_iterator<int> output(cout);

  cout << number1 << "+" << number2 << "=";

  *output = number1 + number2; // cout으로 출력한다.

  cout << endl; 
  
  system("PAUSE");
  return 0;
}
