import java.io.*;
import java.net.*;
import java.util.Scanner;

public class SpellCheckerClient {
	private Socket socket = null;
	private BufferedReader in = null;
	private BufferedWriter out = null;
	
	public SpellCheckerClient() { }
	
	public void run() {
		System.out.println("����üũ Ŭ���̾�Ʈ�Դϴ�.");
		setupConnection();
		System.out.println("����üũ ������ �����Ͽ����ϴ�.");		
		
		Scanner scanner = new Scanner(System.in);
		String word;
		while(true) {
			try {
				System.out.print("�ܾ� >> ");
				word = scanner.next(); // �ܾ� �б�		
				if(word.equals("�׸�")) {
					System.out.println("���α׷��� �����մϴ�...");
					break;
				}
				out.write(word + "\n");
				out.flush();
					
				String result = in.readLine();
				System.out.println(result);
			} catch (IOException e1) {
				System.out.println("�����κ��� ������ ����Ǿ����ϴ�...");
				break;
			}
		}
		scanner.close();
	}
	
	public void setupConnection() {
		try {
			socket = new Socket("localhost", 9998);
			in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
			out = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
		} catch (UnknownHostException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	public static void main(String[] args) {
		SpellCheckerClient checkerClient = new SpellCheckerClient();
		checkerClient.run();
	}

}
