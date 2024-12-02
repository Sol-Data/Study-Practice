#include <iostream>
using namespace std;

int main()
{
  double sum = 0.0;
  double x;
  
  cout << "정수나 실수를 입력하세요. \n";
  cout << "합계를 끝내려면 정수나 실수 이외의 데이터를 입력하세요.\n";
  while(cin >> x)  // 스트림이 정상이어야 true
  {
    sum += x;
  }
  cout << "마지막에 입력한 상수: " << x << endl;
  cout << "합계 = " << sum << endl;
  
  if(cin.fail() && !cin.bad())
  {     // cin의 동작에 영향을 미치지 않는 가벼운 오류이면
    cin.clear(); //스트림의 상태를 재설정한다.
    while(!isspace(cin.get())) // white space 문자가 아니면 제거
      continue;
  }
  else  // cin 이 더 이상 값을 받아들일 수 없는 치명적 오류이면
  {
    cout << " 잘못 입력한 것 -- ";
    cout << " 바로 전의 데이터까지만 합계를 냅니다.";
    exit(1);
  }
  cout << "새로운 상수를 입력하세요. \n";
  cin >> x;   // 정상 동작
  
  system("PAUSE");
  return 0;
}


