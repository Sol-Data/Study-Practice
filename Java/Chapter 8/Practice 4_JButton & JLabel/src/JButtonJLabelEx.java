import javax.swing.*;
import java.awt.*;

public class JButtonJLabelEx extends JFrame {
	public JButtonJLabelEx() {
		setTitle("���! JButton�� JLabel");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container contentPane = getContentPane(); // ����Ʈ�� �˾Ƴ���
		contentPane.setLayout(new FlowLayout());
		
		JButton b = new JButton("��ư");
		b.setBackground(Color.orange); // ������ ������ RED�� ����
		contentPane.add(b); // ����Ʈ�ҿ� ���� �ޱ�

		contentPane.add(new JLabel("�ȳ��ϼ���")); // ����Ʈ�ҿ� ���ڿ� �ޱ�
	
		setSize(230, 100); // ������ ũ�� 230x100 ����
		setVisible(true); // ȭ�鿡 ������ ���
	}
	public static void main(String[] args) {
		new JButtonJLabelEx();
	}
}