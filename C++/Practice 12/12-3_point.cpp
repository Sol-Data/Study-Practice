#include <iostream>
using namespace std;

class Point
{
  public:
    Point(){x = 0; y = 0;};             // 생성자 
    Point(int a, int b){x = a; y = b;}; // 생성자 
    Point operator +(Point obj); // + 연산자 오버로드 
    Point operator -(Point obj); // - 연산자 오버로드 
    void showData(){cout << "x : " << x << endl;
           cout << "y : " << y << endl;};
  private:
    int x;
    int y;
};

Point Point::operator +(Point obj)
// 연산자 + 에 대한 오버로드 구현 - 객체끼리 + 연산
{
  Point Result;
  Result.x = x + obj.x;
  Result.y = y + obj.y;
  return Result;
}

Point Point::operator -(Point obj)
// 연산자 - 에 대한 오버로드 구현 - 객체끼리 - 연산
{
  Point Result;
  Result.x = x - obj.x;
  Result.y = y - obj.y;
  return Result;
}

int main()
{
  Point pt1(200, 300);
  Point pt2(50, 100);
  Point pt3; 

  pt3 = pt1 + pt2; // 두 객체끼리 + 연산
  pt3.showData();

  pt3 = pt1 - pt2; // 두 객체끼리 - 연산
  pt3.showData();

  system("PAUSE");
  return 0;
}
 
