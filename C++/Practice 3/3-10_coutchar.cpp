#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
   char ch = 'A';
   char str[] = "Happy";
   cout << "123456789012345678901234567890" << endl;
   cout.fill('-');
   cout << setw(6) << ch << endl;
   cout << setw(12) << str << endl;
   cout.fill();
   cout << str << endl;
   
   return 0;
}