#include <iostream>
#include <cstring>
using namespace std;

class String
{
  public:
    String(){str = new char[80];};
    String(char *s){str = new char[80]; strcpy(str, s);};
    String operator +(String obj);
    // 문자열을 결합하기 위한 + 연산자를 오버로드
    void showData(){cout << "결합한 문자열: " << str << endl;}; 
  private:
    char *str;
};

String String::operator +(String obj)
// 문자열 연결용 + 연산자 오버로드에 대한 구현
{
  String temp;
  strcpy(temp.str, this->str);
  strcat(temp.str, obj.str);  // obj 객체를 결합한다. 
  return temp;
}

int main()
{
  String str1("Happy ");
  String str2("Day");
  String str3;

  str3 = str1 + str2;
  str3.showData();

  system("PAUSE");
  return 0;
}
