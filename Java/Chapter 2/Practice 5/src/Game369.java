import java.util.Scanner;

public class Game369 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("1~99 사이의 정수를 입력하세요>>");
		int n = scanner.nextInt();

		int first = n/10; // 10으로 나눈 몫
		int second = n%10; // 10으로 나눈 나머지
		
		if(first == 0)
			first = 1; // 3의 배수가 아닌 임의의 수로 변경

		if(second == 0)
			second = 1; // 3의 배수가 아닌 임의의 수로 변경
		
		if(first%3 == 0 && second%3 == 0) { // 둘다 3의 배수인 경우
			System.out.println("박수짝짝");
		}
		else if((first%3 == 0 && second%3 != 0) ||
				(first%3 != 0 && second%3 == 0)) { // 둘 중 하나만 3의 배수인 경우
			System.out.println("박수짝");			
		}
		else 
			System.out.println("박수없음");
		
		scanner.close();
	}

}
