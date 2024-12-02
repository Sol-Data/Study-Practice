#include <iostream>
using namespace std;

int main()
{
   int a[2][3] = {{4,5,6}, {7,8,9}};
   
   for(int i = 0; i < 2; i++)
   {
      for(int j = 0; j < 3; j++)
         cout << a[i][j] << " ";
      cout << endl; 
   }
   system("PAUSE");
   return 0;
}
