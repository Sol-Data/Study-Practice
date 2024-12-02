#include <iostream>
#include <cstring>
using namespace std;

template <class T> void Swap(T &px, T &py);

struct Dept
{
  int no;           // 부서번호 
  char name[20];    // 부서명 
  char loc[80];     // 부서위치 
};

template <> void Swap<Dept>(Dept &px, Dept &py);

int main()
{
  int x = 3, y = 7;
  Dept dt1 = {101, "인사과", "서울"};
  Dept dt2 = {102, "생산과", "부천"};
  
  cout << "Swap 호출 전, x: " << x << " y: " << y << "\n";
  
  Swap(x, y);
  cout << "Swap 호출 후, x: " << x << " y: " << y << "\n";
  
  Swap(dt1, dt2);
  cout << "Swap 호출 후, 부서1: " << dt1.no << "  "
       << dt1.name << "  " << dt1.loc << endl;

  system("PAUSE"); 
  return 0;
}

template <class T> void Swap(T &px, T &py)
{
  T temp;
  
  temp = px;
  px = py;
  py = temp;
}

template <> void Swap<Dept>(Dept &px, Dept &py) // 명시적 특수화
{
  px.no = py.no; 
  strcpy(px.name, py.name);
  // 구조체의 세 가지 멤버 중에서 특정한 부분(부서 위치)을 유지한다.
}

