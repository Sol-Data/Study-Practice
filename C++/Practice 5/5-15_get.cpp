#include <iostream>        
using namespace std;     

int main()                   
{                                        
  char ch;
    
  cout << "단일 문자를 입력하세요!\n";
  cout << "Ctrl + z 키를 누르면 종료합니다!\n";
  while((ch = cin.get()) != EOF)
  {
     cout << ch;
  }
  
  system("PAUSE");  
  return  0;
}

