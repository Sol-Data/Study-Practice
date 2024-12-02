#include <iostream>
#include <fstream>
using namespace std;
#include <cstdlib>
#include <cstring>
#include <iomanip>

struct Geecha {
  long number;   // 고객 번호 7 bytes
  char code[4];  // 열차 코드 3 bytes
  char jasuk[4]; // 좌석 코드 3 bytes
  long cal;      // 열차 요금 6 bytes
  char org[4];   // 출발지 코드 3 bytes
  char dest[4];  // 도착지 코드 3 bytes
  long soo;      // 탑승 인원   3 bytes
  double dist;   // 여행 거리   6 bytes
  long count;    // 월 이용 횟수 2 bytes
};
  
int main()
{
  char line[256] = ""; // 한 개의 레코드 단위로 입력한 내용 저장
  char temp1[8], temp4[7], temp7[4], temp8[7], temp9[3];
  
  struct Geecha gc = {0};  // 구조체 변수 선언과 초기화
  
  ifstream fin;
  
  const char *fi = "project2.txt";
  
  fin.open(fi, ios::in | ios::binary);
  // 읽어 올 데이터 파일 오픈
  cout << "고객번호:열차:좌석:요 금:출발지:도착지:탑승인원:거     리:월이용 수:\n";
  // 파일에 저장된 내용을 레코드 단위로 읽어온다.
  // 파일이 끝날 때까지(EOF) 읽기를 반복한다.
  while(!fin.eof())
  {
    fin.getline(line, 256); // 레코드 단위로 읽기(모두 문자열로 읽기)
    // 문자열을 숫자 long 타입으로 변환
    gc.number = atol(strncpy(temp1, line + 0, 7));
    // strncpy(dest, source, number)
    if(gc.number == 0) break;
    strncpy(gc.code, line + 7, 3);  //열차코드,자릿수 0+7=7
    strncpy(gc.jasuk, line + 10, 3);//좌석코드,자릿수 0+7+3=10
    gc.cal = atol(strncpy(temp4, line + 13, 6));
    // 열차 요금, 자릿수 0+7+3+3=13
    strncpy(gc.org, line + 19, 3);                  // 출발지 코드
    strncpy(gc.dest, line + 22, 3);                // 도착지 코드
    gc.soo = atol(strncpy(temp7, line + 25, 3));   //탑승 인원
    gc.dist = atof(strncpy(temp8, line + 28, 6)); 
    // 여행 거리, 소숫점 포함한 자리
    gc.count = atol(strncpy(temp9, line + 34, 2)); // 월 이용 횟수

    // 기차 구조체의 모든 멤버 변수 내용을 화면에 출력
    cout << setw(7) << gc.number;
    cout << setw(5) << gc.code;
    cout << setw(5) << gc.jasuk;
    cout << setw(8) << gc.cal;
    cout << setw(6) << gc.org;
    cout << setw(6) << gc.dest;
    cout << setw(9) << gc.soo;
    cout << setw(10) << gc.dist;
    cout << setw(7) << gc.count << endl;
  }
  fin.close();

  system("PAUSE");
  return 0;
}


