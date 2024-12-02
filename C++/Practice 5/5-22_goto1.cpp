#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    
    loop1:
       cout << x << " ";
       x++;
       if(x < 10) goto loop1;
    cout << endl;
    system("PAUSE");   
    return 0;
}
