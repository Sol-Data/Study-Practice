#include <iostream>
using namespace std;

template <class Type>
class Point
{
  public:
    Point(Type x, Type y){this->x = x; this->y = y;};
    void showData(){cout << x << "  "; cout << y << "\n";};
  private:
    Type x;
    Type y;
};

int main()
{
  Point<int> pt1(100, 200);
  Point<double> pt2(200.7, 300.2);
  pt1.showData();
  pt2.showData();
  
  system("PAUSE");
  return 0;
}
