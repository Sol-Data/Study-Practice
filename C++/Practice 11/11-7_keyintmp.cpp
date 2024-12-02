#include <iostream>
using namespace std;

template <class Type>
class Info
{
  public:
    void getData();
    void showData();
  private:
    Type data;
};

template <class Type>
void Info<Type>::getData()
{
  cin >> data;
  cin.ignore(255, '\n');
}

template <class Type>
void Info<Type>::showData()
{
  cout << "입력한 데이터:" << data << endl;
};

int main()
{
  Info<int> i;
  Info<double> d;
  Info<char> ch;
  
  cout << "정수, 실수, 단일문자 순서로 입력하세요! " << endl;
  
  i.getData();
  d.getData();
  ch.getData();
  
  i.showData();
  d.showData();
  ch.showData();
  
  system("PAUSE");
  return 0;
}
