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
  myFax.status();           // 컴파일시 오류가 난다. 
  myFax.Receive();

  system("PAUSE");
  return 0;
}
