import java.util.Scanner;

class Player { // 선수를 표현하는 클래스
	private String name; // 선수 이름
	public Player(String name) { this.name = name; } // 생성자
	public String getName() { return name; }
}

public class GamblingGame {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		Player [] p = new Player [2]; // 선수 배열 선언
		
		for(int i=0; i<p.length; i++) { // 두 선수의 이름을 입력받는다.
			System.out.print("선수 이름 입력 >>"); // 프롬프트 출력
			p[i] = new Player(scanner.next()); // 각 선수 객체 생성
		}	
		
		int n=0; // 두 선수가 번갈아 게임할 때, n은 배열 p의 인덱스
		
		while(true) {
			System.out.print(p[n].getName()+"씨, <Enter 외 아무키나 치세요>");
			scanner.next(); // Y 키를 읽고 버림
			int [] val = new int [3]; // 3개의 랜덤 수를 저장하기 위한 정수 배열 생성
			for(int i=0; i<val.length; i++) { // 3 개의 랜덤 정수 생성
				val[i] = (int)(Math.random()*3); // 랜덤 정수 값을 0~2 사이로 발생
				System.out.print(val[i] + "\t"); // 3개의 정수 출력
			}
			System.out.println(); // 한 줄 띄기
			if((val[0] == val[1]) && (val[1] == val[2])) { // 3 정수가 모두 같으면
				System.out.print(p[n].getName() + "이 승리하였습니다."); // 승리 메시지 출력
				break; // while 벗어남
			}
			n++; // 다음 선수 인덱스
			n = n%2; // 인덱스가 2가 되면 다시 0으로 돌리기 위해
		}
		
		scanner.close();
	}
}
