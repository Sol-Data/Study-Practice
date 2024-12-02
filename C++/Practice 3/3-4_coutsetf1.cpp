#include <iostream>
using namespace std;

int main()
{
   int i = 19;
   
   cout << i << "\n";
   cout.setf(ios::showpos);
   cout << i << endl;
   cout.setf(ios::showbase);
   cout << oct << i << endl;
   cout.setf(ios::uppercase);
   cout << hex << 19 << "\n";
   
   return 0;
}