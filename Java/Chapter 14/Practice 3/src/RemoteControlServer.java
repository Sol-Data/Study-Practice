import java.awt.*;
import java.io.*;
import java.net.*;
import javax.swing.*;

public class RemoteControlServer extends JFrame {
	private BufferedReader in = null;
	private BufferedWriter out = null;
	private ServerSocket listener = null;
	private Socket socket = null;
	
	private JLabel label = new JLabel("Java");
	
	public RemoteControlServer() {
		super("���� ����");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container c = getContentPane();
		c.setLayout(null); // ��ġ������ ����
		label.setSize(100, 30);
		label.setEnabled(false);
		label.setLocation(10, 10);
		label.setFont(new Font("Consolas", Font.ITALIC, 30));
		label.setForeground(Color.MAGENTA);
		c.add(label);
		
		setSize(250, 250);
		setVisible(true);
		
		try {
			setupConnection();
		} catch (IOException e) {
			handleError(e.getMessage());
		}
	}
	
	private void setupConnection() throws IOException {
		listener = new ServerSocket(9999); // ���� ���� ����
		
		 // Ŭ���̾�Ʈ�κ��� ���� ��û ���
		socket = listener.accept();

		// Ŭ���̾�Ʈ�� ����Ǹ� ���̺��� Ȱ��ȭ ��Ŵ
		label.setEnabled(true); // ������ ��Ÿ���� ǥ��
		in = new BufferedReader(new InputStreamReader(socket.getInputStream())); // Ŭ���̾�Ʈ�κ����� �Է� ��Ʈ��
		out = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream())); // Ŭ���̾�Ʈ���� ��� ��Ʈ��
		
		// ���� ���� ���� �����带 ����� ����
		new StubThread().start();
	}
	
	private static void handleError(String string) {
		System.out.println(string);
		System.exit(1);
	}
	
	
	class StubThread extends Thread {
		@Override
		public void run() {
			String msg = null;
			while (true) {
				try {
					msg = in.readLine(); // ���κ��� �� ���� ���ڿ� �ޱ�
				} catch (IOException e) {
					handleError(e.getMessage());
				}
				
				// ���� ���̺��� ��ġ
				int x = label.getX(); 
				int y = label.getY();
				
				switch(msg) {
					case "LEFT" :
						if(x-10 < 0) x = 0;  // �������� �� �� �� ���� ���			
						label.setLocation(x-10, y); 
						break;
					case "RIGHT" :
						if(x+10 > label.getParent().getWidth()) 
							break; // ���������� �� �� �� ���� ��� �׳� ����			
						label.setLocation(x+10, y); 
						break;				
					case "UP" :
						if(y-10 < 0) y = 0; // �������� �� �� �� ���� ���
						label.setLocation(x, y-10); 
						break;
					case "DOWN" :
						if(y+10 > label.getParent().getHeight()) 
							break; // �Ʒ������� �� �� �� ���� ��� �׳� ����
						label.setLocation(x, y+10); 
						break;
					default : // Ŭ���̾�Ʈ�κ��� �߸��� ����. ��� ó���ұ�? ����� �ƹ� �������� �Ѿ��.
				}
				
				label.getParent().repaint(); // ���̺��� �θ� �����̳ʺ��� �ٽ� �׸���(���̺� �ڽ� �ٽ� �׷���)
			}
		}	
	}
	
	public static void main(String[] args) {
		new RemoteControlServer();
	}

}
