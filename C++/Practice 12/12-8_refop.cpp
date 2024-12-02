#include <iostream>
#include <cstring>
using namespace std;

class String
{
  public:
    String(char *s){str = new char[80]; strcpy(str, s);};
    char &operator [](int num);
    // 반환 데이터 타입을 참조(&)해야 값을 대입할 수 있다. 
    ~String(){delete[] str;};  //소멸자 
    void showData(){cout << "문자: " << str << endl;}; 
  private:
    char *str;
};

char & String::operator [](int num) // []연산자 오버로드 구현
{
  return str[num];  // 포인터 멤버 변수 str을 배열로 반환
} 

int main()
{
  String str1("Happy Day");
  for(int i = 0; i < 5; i++)
  {
    cout << str1[i] << "    ";
    str1[i] = 97 + i;
    cout << str1[i] << endl;
  }
  system("PAUSE");
  return 0;
}
