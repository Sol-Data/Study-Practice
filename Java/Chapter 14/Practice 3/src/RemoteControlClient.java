import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.net.*;
import javax.swing.*;

public class RemoteControlClient extends JFrame {
	private BufferedReader in = null;
	private BufferedWriter out = null;
	private ServerSocket listener = null;
	private Socket socket = null;

	private String [] btnText = { "LEFT", "RIGHT", "UP", "DOWN", "Connect" };	
	private JButton [] btns = { 
			new JButton(btnText[0]), 
			new JButton(btnText[1]), 
			new JButton(btnText[2]), 
			new JButton(btnText[3]),
			new JButton(btnText[4])
	};	
	
	public RemoteControlClient() {
		super("���� ���� Ŭ���̾�Ʈ");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container c = getContentPane();
		c.setLayout(new BorderLayout());
		c.add(btns[0], BorderLayout.WEST);
		c.add(btns[1], BorderLayout.EAST);
		c.add(btns[2], BorderLayout.NORTH);
		c.add(btns[3], BorderLayout.SOUTH);
		c.add(btns[4], BorderLayout.CENTER);		
		

		MyAction listener = new MyAction();
		for(int i=0; i<btns.length; i++) {
			btns[i].addActionListener(listener); // ��� ��ư�� ������ ���
			btns[i].setEnabled(false); 	// ����� ������ ��� ��ư ��Ȱ��ȭ
		}
		
		btns[4].setEnabled(true); // ���� ��ư�� Ȱ��ȭ
		
		setSize(100, 150);
		setVisible(true);
	}
	
	private void setupConnection() throws IOException {
		socket = new Socket("localhost", 9999); // Ŭ���̾�Ʈ ���� ����. ���� �õ�
		setTitle("�����");
		
		// ��� ��ư Ȱ��ȭ
		for(int i=0; i<btns.length; i++) btns[i].setEnabled(true);
		
		btns[4].setEnabled(false); // ���� ��ư�� ��Ȱ��ȭ
		
		in = new BufferedReader(new InputStreamReader(socket.getInputStream())); // Ŭ���̾�Ʈ�κ����� �Է� ��Ʈ��
		out = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream())); // Ŭ���̾�Ʈ���� ��� ��Ʈ��
	}
	
	private static void handleError(String string) {
		System.out.println(string);
		System.exit(1);
	}
	
	class MyAction implements ActionListener {
		@Override
		public void actionPerformed(ActionEvent e) {
			try {
				JButton b = (JButton)e.getSource();
				String msg=""; 
				if(b == btns[0]) msg = btnText[0]; // left button
				else if(b == btns[1]) msg = btnText[1]; // right button			
				else if(b == btns[2]) msg = btnText[2]; // up button
				else if(b == btns[3]) msg = btnText[3]; // down button
				else if(b == btns[4]) { // Connect ��ư�� ���
					try {
						setupConnection();
						return;
					} catch (IOException e1) {
						handleError(e1.getMessage());
					}			
				}
				
				// ���� ���� �޽��� ����
				out.write(msg+"\n");
				out.flush();
			} catch (IOException e1) {
				handleError(e1.getMessage());
			} 			
		}		
	}

	
	public static void main(String[] args) {
		new RemoteControlClient();
	}

}
