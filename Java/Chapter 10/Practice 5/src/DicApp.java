import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

public class DicApp extends JFrame {
	private JTextField eng = new JTextField(10);
	private JTextField kor = new JTextField(10);
	private JButton saveBtn = new JButton("����");
	private JButton searchBtn = new JButton("ã��");
	private JLabel countLabel = new JLabel("0");
	private JTextArea ta = new JTextArea(7, 25);
	
	private HashMap<String, String> dic = new HashMap<String, String>(); // �ܾ� ����� �ؽø�
	
	public DicApp() {
		super("�ܾ� ���� �����");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //������ ���� ��ư(X)�� Ŭ���ϸ� ���α׷� ����		

		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		
		saveBtn.setBackground(Color.YELLOW);
		searchBtn.setBackground(Color.GREEN);
		
		c.add(new JLabel("����"));
		c.add(eng);
		c.add(new JLabel("�ѱ�"));
		c.add(kor);
		c.add(saveBtn);
		c.add(searchBtn);		
		c.add(countLabel);
		
		saveBtn.addActionListener(new ActionListener() { // ���� ��ư�� ������ �� ó��
			
			@Override
			public void actionPerformed(ActionEvent e) {
				String eText = eng.getText();
				String kText = kor.getText();
				if(eText.length() == 0 || kText.length() == 0) {
					ta.append("�ܾ� �� �Է� (" + eText + "," + kText + ")\n");
					return; // ��� �ѱ��� �ܾ� �� �� �ϳ��� �ԷµǾ� ���� ����
				}
				
				// �̹� �����ϴ� �ܾ����� �Ǻ�
				if(dic.get(eText) == null)  { // ���� �ܾ�
					ta.append("���� (" + eText + "," + kText + ")\n");
					int count = Integer.parseInt(countLabel.getText());
					count++;
					countLabel.setText(Integer.toString(count)); // �ܾ�� ����					
				}
				else // �ִ� �ܾ�
					ta.append("���� (" + eText + "," + kText + ")\n");					
				
				// �ܾ� �߰� Ȥ�� ����
				dic.put(eText, kText);
			}
		});
		searchBtn.addActionListener(new ActionListener() { // �˻� ��ư�� ������ �� ó��
			
			@Override
			public void actionPerformed(ActionEvent e) {
				String kText = dic.get(eng.getText());
				if(kText == null) 
					kText = "�ܾ� ����";
				kor.setText(kText);
			}
		});
		

		c.add(new JScrollPane(ta));
		setSize(300, 250);
		setVisible(true);
		
	}
	
	
	public static void main(String[] args) {
		new DicApp();
	}

}
