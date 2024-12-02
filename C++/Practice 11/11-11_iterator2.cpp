#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
  int data[10] = {1,2,3,4,5,6,7,8,9,0};
  vector<int> vec(10); // int 타입 요소가 10개인 벡터 vec을 생성 

  copy(data, data + 10, vec.begin());
  //배열 data[0]부터 data[9]까지의 요소를 벡터 vec의 시작 위치부터 복사
  ostream_iterator<int, char> show(cout, " ");
  //화면으로 출력하기 위한 cout용 ostream_iterator 반복자 show를 
  //생성한다. ostream_iterator<int, char>에서 int는 출력 스트림
  //으로 보내는 값의 데이터 타입이 되고, char은 출력 스트림으로 보내 
  //지는 값을 구분하기 위해 사용하는 구분자의 데이터 타입이 된다.
  //show(cout, " ")의 " "은 출력 스트림에 보내지는 값 뒤에 표시되는
  //구분자이다

  copy(vec.begin(), vec.end(), show);
  //copy(복사 시작 위치, 복사 끝 위치, 복사될 위치)
  //벡터에서 출력 스트림으로 값들을 복사하여 화면으로 출력시킨다. 
  cout << endl << endl;

  cout << "역방향 이터레이터의 암시적 사용:\n";
  copy(vec.rbegin(), vec.rend(), show);
  // 벡터 vec의 역방향 시작 위치부터 역방향의 끝까지의 요소를
  // show로 정의한 표준 출력 장치인 화면으로 출력한다.
  cout << endl << endl;

  cout << "역방향 이터레이터의 명시적 사용:\n";
  vector<int>::reverse_iterator ri;
  // 역방향 반복자 ri, 포인터로 동작
  
  for (ri = vec.rbegin(); ri != vec.rend(); ++ri)
    cout << *ri << ' ';
  cout << endl << endl;
 
  system("PAUSE");
  return 0;
}
