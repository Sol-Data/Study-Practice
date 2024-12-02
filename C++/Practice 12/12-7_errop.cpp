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
  for(int i = 0; i < 5; i++)
  {
    cout << str1[i] << endl;
    str1[i] = i + 2;  // 오류가 발생한다! 
  }
 
  system("PAUSE");
  return 0;
}
