import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class ComboBoxEx extends JFrame {
	private String [] fruits = {"apple", "banana", "kiwi", "mango",
			"pear", "peach", "berry", "strawberry", "blackberry"};  // 콤보박스의 아이템
	public ComboBoxEx() {
		setTitle("콤보박스 활용  예제");
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		
		JComboBox<String> combo = new JComboBox<String>(fruits); // 콤보박스 생성
		c.add(combo);

		setSize(300,250);
		setVisible(true);
	}
	
	public static void main(String [] args) {
		new ComboBoxEx();
	}
}


