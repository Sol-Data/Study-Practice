#include <iostream>
using namespace std;

int main()
{
  int grade = 0;
  cout << "성적 입력 : "; 
  cin >> grade;  
  switch(grade / 10) {
    case 10:
    case 9:    // (grade / 10)한 결과가 10이거나 9이면
      cout << "A 학점입니다.\n";
      break;   // switch문을 끝내고 switch문 다음 문장으로 이동 
    case 8: 
      cout << "B 학점입니다.\n";
      break;
    case 7: 
      cout << "C 학점입니다.\n";
      break;
    case 6:
      cout << "D 학점입니다.\n";
      break;
    default:  // 위 조건인 10, 9, 8, 7, 6이 아닌 경우 
      cout << "F 학점입니다.\n";
      break;  // 마지막 조건에는 break가 불필요하나 사용해도 무방함 
  }                                         

  system("PAUSE");
  return 0;
}
