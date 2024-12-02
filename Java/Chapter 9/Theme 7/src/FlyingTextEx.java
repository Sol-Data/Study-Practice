import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class FlyingTextEx extends JFrame {
	private JLabel la = new JLabel("HELLO"); // Ű �Է¿� ���� ������ ���̺� ������Ʈ 
	
	public FlyingTextEx() {
		super("��,��,��,�� Ű�� �̿��Ͽ� �ؽ�Ʈ �����̱�");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		Container c = getContentPane();
		c.setLayout(null); // ����Ʈ���� ��ġ������ ����
		c.addKeyListener(new MyKeyListener()); // ����Ʈ�ҿ� Ű ������ �ޱ�
		la.setLocation(50,50); // ���̺��� �ʱ� ��ġ�� (50,50)
		la.setSize(100,20);
		c.add(la);
		setSize(200,200);
		setVisible(true);
		
		c.setFocusable(true); // ����Ʈ���� ��Ŀ���� ���� �� �ֵ��� ����
		c.requestFocus(); // ����Ʈ���� Ű �Է��� ���� �� �ֵ��� ��Ŀ�� ���� ����	
	}
	
	class MyKeyListener extends KeyAdapter { // Key ������ ����
		public void keyPressed(KeyEvent e) {
			int keyCode = e.getKeyCode(); // �Էµ� Ű�� Ű�ڵ带 �˾Ƴ���.
			switch(keyCode) { // Ű �ڵ忡 ���� ��,��,��,�� Ű �Ǻ�, ���̺��� ��ġ �̵�
				case KeyEvent.VK_UP:  //UP Ű
					la.setLocation(la.getX(), la.getY() - 10); break;
				case KeyEvent.VK_DOWN: //DOWN Ű 
					la.setLocation(la.getX(), la.getY() + 10); break;
				case KeyEvent.VK_LEFT: //LEFT Ű
					la.setLocation(la.getX() - 10, la.getY()); break;
				case KeyEvent.VK_RIGHT: //RIGHT Ű
					la.setLocation(la.getX() + 10, la.getY()); break;				
			}
		}
	}
	
	public static void main(String [] args) {
		new FlyingTextEx();
	}
}