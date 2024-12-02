import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class TextAreaEx extends JFrame {
	private JTextField tf = new JTextField(20);
	private JTextArea ta = new JTextArea(7, 20); // ���ٿ� 20�� �Է°��� x 7�� �Է�â
	
	public TextAreaEx() {
		setTitle("�ؽ�Ʈ���� �����  ����");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(new FlowLayout());

		c.add(new JLabel("�Է� �� <Enter> Ű�� �Է��ϼ���"));
		c.add(tf);
		c.add(new JScrollPane(ta));
		
		// �ؽ�Ʈ�ʵ忡 Action �����ʸ� ����Ѵ�.
		tf.addActionListener(new ActionListener() { // <Enter> Ű �Է½� �۵��ϴ� ������
			public void actionPerformed(ActionEvent e) {
				JTextField t = (JTextField)e.getSource();
				ta.append(t.getText() + "\n"); // �ؽ�Ʈ�ʵ��� ���ڿ��� �ؽ�Ʈ������ ���� 
				t.setText(""); // ���� �ؽ�Ʈ�ʵ忡 �Էµ� ���� �����
			}
		});
		
		setSize(300,250);
		setVisible(true);
	}
		
	public static void main(String [] args) {
		new TextAreaEx();
	}
}