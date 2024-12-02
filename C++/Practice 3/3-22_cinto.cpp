#include <iostream>        
using namespace std;     
#include <ctype.h>
#include <cstring>

int main()                   
{                                        
  const int SIZE = 80;   // SIZE를 80을 가지는 상수로 지정
  char data;
  int input;
  
  cout << "한 개의 영문자 입력: ";
  cin >> data;
  cout << data << endl;
  
  cin.ignore(SIZE, '\n');
      // 개행문자를 만날 때까지 80개의 문자를 버린다.
  cout << "한 개의 int 정수 입력: ";
  cin >> input;
  cout << input << endl;

  cin.ignore(SIZE, '\n');
  cout << "한 개의 영문자 입력: ";
  cin.get(data);  // 키보드로부터 한 개의 문자를 받아들임
  cout.put(data); // 받아들인 문자를 화면에 출력
  cout.put('\n'); // 개행문자를 화면에 출력

  cin.ignore(SIZE, '\n'); 
  cout << toupper(data) << "  ";   // 대문자로 변환
  cout << tolower(data) << endl;   // 소문자로 변환
  cin.clear();         // 입력 스트림 버퍼 비우기
  
  system("PAUSE");
  return 0;
}
