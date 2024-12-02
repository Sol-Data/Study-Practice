#include <iostream>
using namespace std;
#include <iomanip>

struct Student
{
  char hakbun[8]; // 학번
  char name[20];  // 이름
  int c;          // C 교과 점수
  int cpp;        // C++ 교과 점수
  int web;        // Web 교과 점수
};

int main()
{
  struct Student student[] = {
    {"0821001", "박달재", 89, 98, 77},
    {"0821002", "한사랑", 86, 94, 83},
    {"0821003", "이소망", 87, 92, 85}};

  cout << "  학 번  | 이 름 |  C  | C++ | Web |\n";
  
  for(int i = 0; i < 3; i++) {
    cout << setw(9) << student[i].hakbun;
    cout << setw(8) << student[i].name;
    cout << setw(6) << student[i].c;
    cout << setw(6) << student[i].cpp;
    cout << setw(6) << student[i].web << endl;
  }
  system("PAUSE");
  return 0;
}
