#include <iostream>
#include <cstring>
using namespace std;

class String
{
  public:
    String(char *s){str = new char[80]; strcpy(str, s);};
    char operator [](int num);
    ~String(){delete[] str;};  //소멸자 
    void showData(){cout << "문자: " << str << endl;}; 
  private:
     char *str;
};

char String::operator [](int num) // []연산자 오버로드 구현
{
  return str[num];  // 포인터 멤버 변수 str을 배열로 반환
} 

int main()
{
  String str1("Happy Day");
  for(int i = 0; i < 9; i++)
    cout << str1[i] << endl;
  // 객체  str1에 대해 [] 연산자 오버로드를 사용해 배열처럼 처리한다.
 
  system("PAUSE");
  return 0;
}
