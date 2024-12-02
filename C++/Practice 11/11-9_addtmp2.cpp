#include <iostream>
using namespace std;

template <class Type>
void Swap(Type &px, Type &py);

struct Dept
{
  int no;
  char name[20];
  char loc[80];
};

template <> void Swap<Dept>(Dept &px, Dept &py);
// 구조체 Dept에 대해서 적용되도록 선언된 명시적 특수 템플릿 

int main()
{
  int x = 3, y = 7;
  Dept dt1 = {101, "인사과", "서울"};
  Dept dt2 = {102, "생산과", "부천"};
  cout << "Swap 호출전, x: " << x << " y: " << y << "\n";
  Swap(x, y);  // 정수값을 가인수로 가지는 Swap 함수의 호출 
  cout << "Swap 호출후, x: " << x << " y: " << y << "\n";
  Swap(dt1, dt2);  // 구조체 Dept의 객체를 가인수로 가지는 Swap 함수의 호출 
  cout << "Swap 호출후, 부서1: " << dt1.no << " " 
       << dt1.name << " " << dt1.loc << endl << "             부서2: " 
       << dt2.no << " " << dt2.name << " " << dt2.loc << endl;
  system("PAUSE");
  return 0;
}

template <class Type>            // 일반 템플릿 함수의 구현 
void Swap(Type &px, Type &py)
{
  Type temp;
  
  temp = px;
  px = py;
  py = temp;
}

template <> void Swap<Dept>(Dept &px, Dept &py) // 명시적 템플릿 함수의 구현 
{
  Dept temp(px);
  px.no = py.no;
  strcpy(px.name, py.name);
  strcpy(px.loc, py.loc);
  py.no = temp.no;
  strcpy(py.name, temp.name);
  strcpy(py.loc, temp.loc);
}

