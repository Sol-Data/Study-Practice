import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

public class DicApp extends JFrame {
	private JTextField eng = new JTextField(10);
	private JTextField kor = new JTextField(10);
	private JButton saveBtn = new JButton("저장");
	private JButton searchBtn = new JButton("찾기");
	private JLabel countLabel = new JLabel("0");
	private JTextArea ta = new JTextArea(7, 25);
	
	private HashMap<String, String> dic = new HashMap<String, String>(); // 단어 저장용 해시맵
	
	public DicApp() {
		super("단어 사전 만들기");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //프레임 종료 버튼(X)을 클릭하면 프로그램 종료		

		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		
		saveBtn.setBackground(Color.YELLOW);
		searchBtn.setBackground(Color.GREEN);
		
		c.add(new JLabel("영어"));
		c.add(eng);
		c.add(new JLabel("한글"));
		c.add(kor);
		c.add(saveBtn);
		c.add(searchBtn);		
		c.add(countLabel);
		
		saveBtn.addActionListener(new ActionListener() { // 저장 버튼을 눌었을 때 처리
			
			@Override
			public void actionPerformed(ActionEvent e) {
				String eText = eng.getText();
				String kText = kor.getText();
				if(eText.length() == 0 || kText.length() == 0) {
					ta.append("단어 미 입력 (" + eText + "," + kText + ")\n");
					return; // 영어나 한글의 단어 둘 중 하나가 입력되어 있지 않음
				}
				
				// 이미 존재하는 단어인지 판별
				if(dic.get(eText) == null)  { // 없는 단어
					ta.append("삽입 (" + eText + "," + kText + ")\n");
					int count = Integer.parseInt(countLabel.getText());
					count++;
					countLabel.setText(Integer.toString(count)); // 단어수 증가					
				}
				else // 있는 단어
					ta.append("변경 (" + eText + "," + kText + ")\n");					
				
				// 단어 추가 혹은 변경
				dic.put(eText, kText);
			}
		});
		searchBtn.addActionListener(new ActionListener() { // 검색 버튼을 눌렀을 때 처리
			
			@Override
			public void actionPerformed(ActionEvent e) {
				String kText = dic.get(eng.getText());
				if(kText == null) 
					kText = "단어 없음";
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
