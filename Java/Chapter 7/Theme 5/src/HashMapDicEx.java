import java.util.*;
public class HashMapDicEx {
	public static void main(String[] args) {
		// ���� �ܾ�� �ѱ� �ܾ��� ���� �����ϴ� HashMap �÷��� ����
		HashMap<String, String> dic = new HashMap<String, String>(); 
		// var dic = new HashMap<String, String>(); �� HashMap<String, String> dic = new HashMap<>();�� �ص� ��
		
		// 3 ���� (key, value) ���� dic�� ����
		dic.put("baby", "�Ʊ�"); // "baby"�� key, "�Ʊ�"�� value
		dic.put("love", "���"); 
		dic.put("apple", "���");
	
		// dic �ؽøʿ� ��� �ִ� ��� (key, value) �� ���
		Set<String> keys = dic.keySet(); // Ű�� ��� Set �÷��ǿ� �޾ƿ�
		Iterator<String> it = keys.iterator(); // Set�� ����� Ű ���ڿ��� ������ �� �ִ� Iterator ����
		while(it.hasNext()) {
			String key = it.next(); // Ű
			String value = dic.get(key); // ��
			System.out.print("(" + key + "," + value + ")");
		}
		System.out.println();
		
		// ����ڷκ��� ���� �ܾ �Է¹ް� �ѱ� �ܾ� �˻�
		Scanner scanner = new Scanner(System.in);
		for(int i=0; i<3; i++) {
			System.out.print("ã�� ���� �ܾ��?");
			String eng = scanner.next();
			// �ؽøʿ��� 'Ű' eng�� '��' kor �˻�
			String kor = dic.get(eng); // eng�� �ؽøʿ� ������ null ����
			if(kor == null) System.out.println(eng +"�� ���� �ܾ� �Դϴ�.");
			else System.out.println(kor); 
		}
		scanner.close();
	}
}