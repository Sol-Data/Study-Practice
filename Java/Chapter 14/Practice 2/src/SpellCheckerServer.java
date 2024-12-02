import java.io.*;
import java.net.*;
import java.util.*;

public class SpellCheckerServer {
	private SpellChecker spellChecker;
	
	public SpellCheckerServer() { }
	
	public void run() {
		System.out.println("����üũ �����Դϴ�.");
		spellChecker = new SpellChecker("words.txt");
		if(spellChecker.isFileRead()) { // �ܾ� ������ �������� ��� ���� ����
			System.out.println("words.txt �б� �Ϸ�");
			new ServerThread().start(); // ���� ����
		}
	}

	class ServerThread extends Thread { // Ŭ���̾�Ʈ�� ������ �޴� ���� ������
		@Override
		public void run() {
			ServerSocket listener = null;
			Socket socket = null;
			try {
				listener = new ServerSocket(9998);
				while(true) {
					socket = listener.accept();
					System.out.println("Ŭ���̾�Ʈ �����");
					new ServiceThread(socket).start(); // ������ Ŭ���̾�Ʈ�� �����Ͽ� �����ϴ� ������ ����
				}
				
			} catch (IOException e) {
				e.printStackTrace();
			}
			
			try {
				if(listener != null)
					listener.close();
				if(socket != null)
					socket.close();
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
	}
	
	class SpellChecker {
		private Vector<String> v = new Vector<String>(); // ���Ϸκ��� ���� �ܾ �����ϴ� ����
		private boolean fileOn = false;
		
		public SpellChecker(String fileName) {
			try {
				Scanner reader = new Scanner(new FileReader(fileName)); // ������ �б� ����  scanner
				while(reader.hasNext()) {
					String word = reader.nextLine(); // ���� ������ �ܾ� ���� �б�
					v.add(word); // ���� �ܾ ���Ϳ� ����
				}
				reader.close();
				fileOn = true;
			} catch (FileNotFoundException e) {
				e.printStackTrace();
				fileOn = false;
			}
		}
		
		public boolean isFileRead() {
			return fileOn;
		}
		
		public boolean check(String word) { // word�� ���� v�� ������ true ����
			if(v.contains(word))
				return true;
			else
				return false;
		}
	}
	
	// �� Ŭ���̾�Ʈ�� �����Ͽ� �ܾ �����ϰ� "YES"�� "NO"�� �����ϴ� ������
	class ServiceThread extends Thread {
		private Socket socket = null;
		private BufferedReader in = null;
		private BufferedWriter out = null;
		public ServiceThread(Socket socket) { // Ŭ���̾�Ʈ�� ����� ������ ���޹���
			this.socket = socket;
			try {
				in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
				out = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
				
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
		
		@Override
		public void run() {
			while(true) {
				try {
					String word = in.readLine(); // �ܾ� ����
					boolean res = spellChecker.check(word); // ������ ��Ȯ���� �˻�
					if(res == true) {
						out.write("YES\n");
						System.out.println("��û�ܾ� " + word + "=YES");
					}
					else { 
						out.write("NO\n");
						System.out.println("��û�ܾ� " + word + "=NO");						
					}
					out.flush();
				} catch (IOException e) {
					System.out.println("Ŭ���̾�Ʈ ���� ����");
					try {
						socket.close();
					} catch (IOException e1) {
						e1.printStackTrace();
					}
					return; // ������ ����
				}

			}
		}
	}
	
	public static void main(String[] args) {
		SpellCheckerServer checker = new SpellCheckerServer();
		checker.run();

	}

}
