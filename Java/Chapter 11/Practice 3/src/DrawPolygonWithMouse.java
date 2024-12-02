import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

public class DrawPolygonWithMouse extends JFrame {
	public DrawPolygonWithMouse(){
		super("마우스로 폐다각형 그리기");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		setContentPane(new MyPanel());
		setSize(300,300);
		setVisible(true);
	}
	
	class MyPanel extends JPanel {
		private Vector<Integer> x = new Vector<Integer>();
		private Vector<Integer> y = new Vector<Integer>();

		public MyPanel() {
			this.addMouseListener(new MouseAdapter() {
				public void mousePressed(MouseEvent e) { // 점을 찍을 때마다 저장
					x.add(e.getX());
					y.add(e.getY());
					repaint();
				}
			});
		}
		public void paintComponent(Graphics g) {
			super.paintComponent(g);
			g.setColor(Color.MAGENTA);	
			int xs [] = new int [x.size()];
			int ys [] = new int [y.size()];
			for(int i=0; i<x.size(); i++) { // 현재까지 찍힌 점을 모두 배열로 만든다.
				xs[i] = x.get(i);
				ys[i] = y.get(i);
			}
			g.drawPolygon(xs,  ys,  xs.length); // 배열에 들어 있는 점들로 연결된 폐다각형을 그린다.
		}
	}
	
	static public void main(String[] args) {
		new DrawPolygonWithMouse();
	}
}
