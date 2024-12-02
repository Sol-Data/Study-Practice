import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class TextAreaEx extends JFrame {
	public TextAreaEx() {
		setTitle("텍스트영역 만들기 예제");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(new FlowLayout());

		c.add(new JScrollPane(new JTextArea("Hello?", 7, 20)));
		
		setSize(280,200);
		setVisible(true);
	}
		
	public static void main(String [] args) {
		new TextAreaEx();
	}
}