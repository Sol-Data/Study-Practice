#include <iostream>
#include <cstring>
using namespace std;

void showData(struct Address &st); // 구조체 참조변수를 인수로 갖는 함수의 원형

struct Address
{
  char name[20];
  char phone[20];
  char address[80];
};

int main()
{
  struct Address adr;
  strcpy(adr.name, "천사표");
  strcpy(adr.phone, "032-123-4567");
  strcpy(adr.address, "경기도 부천시");
  showData(adr); 
  // 참조자를 사용하므로 일반 변수처럼 구조체명을 실 인수로 사용한다.

  system("PAUSE");
  return 0;
}

void showData(struct Address &st) // 구조체 참조변수 st를 가 인수로 가지는 함수
{
  cout << "이름 : " << st.name << endl;
  cout << "전화 : " << st.phone << endl;
  cout << "주소 : " << st.address << endl;
} 
