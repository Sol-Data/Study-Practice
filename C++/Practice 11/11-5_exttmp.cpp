#include <iostream>
using namespace std;

template <class Type>
class Point
{
  public:
    Point(Type x, Type y);  // 생성자
    void showData();
  private:
    Type x;
    Type y;
};

template <class Type>   // 생성자 정의
Point<Type>::Point(Type x, Type y)
{
  this->x = x;
  this->y = y;
}

template <class Type> // 멤버함수 정의
void Point<Type>::showData()
{
  cout << x << "  ";
  cout << y << "\n";
}

int main()
{
  Point<int> pt1(100, 200);
  Point<double> pt2(200.7, 300.2);
  pt1.showData();
  pt2.showData();
  
  system("PAUSE");
  return 0;
}
