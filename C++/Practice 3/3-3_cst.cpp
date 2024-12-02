#include <iostream>
using namespace std;
#include <iomainip>

int main()
{
   int i = 26;
    
   cout << setw(1) << dec << i;
   cout << setw(10) << oct << i;
   cout << setw(20) << hex << i << endl;
   cout << setw(12) << setiosflags(ios::showbase) << oct << i;
   cout << setw(20) << setiosflags(ios::showbase) << hex << i << endl;
   
   return 0;
}