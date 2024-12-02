#include <iostream>
#include <cstring>
using namespace std;

class Phone
{
  public:
    void call() {cout << "Hello\n";};
    void setNumber(char *number) {strcpy(Number, number);};
    void status() {cout << "OK! Phone state\n";};
  private:
    char Number[80];
};

class Printer
{
  public:
    void Print(char *data) {strcpy(Data,data); cout << Data << endl;};
    void status() {cout << "OK! Printer state\n";};
  private:
    char Data[256];
};

class Fax:public Phone, public Printer
{
  public:
    void Receive() {cout << "Ok receive\n";};
};

int main()
{
  Fax myFax;
  myFax.Print("Happy Day");
  myFax.Printer::status();  // 기본 클래스 Printer의 status()를 사용
  myFax.Receive();

  system("PAUSE");
  return 0;
}
