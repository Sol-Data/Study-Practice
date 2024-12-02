#include <iostream>
#include <fstream>
using namespace std;

struct student
{
  char name[20];
  int kor, eng, mat;
};

int main()
{
  struct student std;
  ifstream fin;       // 입력 파일 객체
  const char *file = "test2.dat";  // 파일 명
  fin.open(file, ios::in | ios::binary); // 파일 오픈
  if(!fin) {  // 파일이 없거나 오류가 발생하면
    cout << "Can not open test2.dat";
    return 0;
  }
  // 정상적으로 파일을 열면
  while(fin.read((char *)&std, sizeof(std)))
  {
    cout << "이름 : " << std.name << "\n";
    cout << "국어 : " << std.kor << "\n";
    cout << "영어 : " << std.eng << "\n";
    cout << "수학 : " << std.mat << "\n";
  }
  fin.close();
  
  system("PAUSE");
  return 0;
}


