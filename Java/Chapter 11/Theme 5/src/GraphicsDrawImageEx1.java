import javax.swing.*;
import java.awt.*;

public class GraphicsDrawImageEx1 extends JFrame {
	public GraphicsDrawImageEx1() {
		setTitle("���� ũ��� ���ϴ� ��ġ�� �̹��� �׸���");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setContentPane(new MyPanel());

		setSize(300, 400);
		setVisible(true);
	}

	class MyPanel extends JPanel {
		private ImageIcon icon = new ImageIcon("images/image0.jpg");// �̹��� �ε�
		private Image img = icon.getImage(); // �̹��� ��ü

		public void paintComponent(Graphics g) {
			super.paintComponent(g);
			
			// �̹����� �г���(20,20)�� ������ ũ��� �׸���.
			g.drawImage(img, 20, 20, this);
		}	
	}
	
	public static void main(String [] args) {
		new GraphicsDrawImageEx1();
	}
} 