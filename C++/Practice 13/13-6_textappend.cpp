#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  char str[80];
  ofstream fout("test.txt", ios::out | ios::app);
  // 파일 오픈, 추가 모드
  cout << "추가할 문자열을 입력하세요 : ";
  cin.getline(str, 80);  // 공백 문자를 포함한 문자열을 입력한다.
  fout << str;           // 파일에 기록한다.
  fout.close();          // 파일을 닫는다.
  
  return 0;
}


