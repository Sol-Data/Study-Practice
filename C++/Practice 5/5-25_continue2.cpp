#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i <= 30; i++)
    {
       if(i % 5)
          continue;
       cout << i << " ";
    }
    cout << endl;
    system("PAUSE");   
    return 0;
}
