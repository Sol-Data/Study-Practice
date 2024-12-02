#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  char ch;
  ifstream fin;
  fin.open("test.txt");
  while(fin.get(ch))
    cout << ch;
  cout << endl;
  fin.close();

  return 0;
}


