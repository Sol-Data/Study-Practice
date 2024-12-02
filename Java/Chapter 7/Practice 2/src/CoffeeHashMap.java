import java.util.HashMap;
import java.util.Scanner;

public class CoffeeHashMap {

	public static void main(String[] args) {
		HashMap<String, Integer> map = new HashMap<String, Integer>();
		map.put("����������", 2000);
		map.put("�Ƹ޸�ī��", 2500);
		map.put("īǪġ��", 3000);
		map.put("ī���", 2500);
		
		System.out.println("����������, �Ƹ޸�ī��, īǪġ��, ī��� �ֽ��ϴ�");
		Scanner scanner = new Scanner(System.in);
		while(true) {
			System.out.print("�ֹ� >> ");
			String coffee = scanner.next();
			if(coffee.equals("�׸�"))
				break;
			Integer price = map.get(coffee);
			if(price == null)
				System.out.println(coffee + " �޴� �����ϴ�.");
			else
				System.out.println(coffee + "�� " + price + "�Դϴ�.");			
		}
		scanner.close();
	}

}
