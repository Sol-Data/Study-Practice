#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main()
{
  const int NUM = 3;
  vector<int> ratings(NUM);
  vector<string> titles(NUM);
  
  cout << NUM << "책 제목과 책 등급(0-10)을 입력!\n";
  
  for(int i = 0; i < NUM; i++) {
    cout << endl;
    cout << i + 1 << "번 책의 제목 입력! ";
    getline(cin, titles[i]);
    cout << i + 1 << "번 책의 등급(0-10)을 입력! ";
    cin >> ratings[i];
    cin.get(); // 키보드로부터 입력받은 '\n'을 삭제
  }
  cout << "입력 내용:\n" << "------------------\n"
       << "등급\t제목\n";
  for(int i = 0; i < NUM; i++)
    cout << ratings[i] << "\t" << titles[i] << endl;
    
  system("PAUSE");
  return 0;
}
