#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // 파일 출력 스트림을 관리하기 위해 ofstream 클래스 객체를 생성한다.
  // 그리고 출력 버퍼로 사용할 공간을 확보한다.
  char str[80];
  ofstream fout;

  fout.open("test.txt");   // 파일 열기, ios::out | ios::trunc 디폴트 모드

  cout << "문자열을 입력하세요 : ";
  cin.getline(str, 80);    // 키보드로부터 문자열을 입력한다.
  fout << str;             // 입력한 문자열을 파일에 출력한다.
  
  fout.close();            // 파일 닫기
  
  return 0;
}


