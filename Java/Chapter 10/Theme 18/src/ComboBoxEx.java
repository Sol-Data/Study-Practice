import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class ComboBoxEx extends JFrame {
	private String [] fruits = {"apple", "banana", "kiwi", "mango",
			"pear", "peach", "berry", "strawberry", "blackberry"};  // �޺��ڽ��� ������
	public ComboBoxEx() {
		setTitle("�޺��ڽ� Ȱ��  ����");
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		
		JComboBox<String> combo = new JComboBox<String>(fruits); // �޺��ڽ� ����
		c.add(combo);

		setSize(300,250);
		setVisible(true);
	}
	
	public static void main(String [] args) {
		new ComboBoxEx();
	}
}


