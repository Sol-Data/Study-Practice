interface Shape {
	final double PI = 3.14; // ���
	void draw(); // ������ �׸��� �߻� �޼ҵ�
	double getArea(); // ������ ������ �����ϴ� �߻� �޼ҵ�
	default public void redraw() { // ����Ʈ �޼ҵ�
		System.out.println("--- �ٽ� �׸��ϴ�. ---");
		draw();	
	}
}

class Circle implements Shape {
	private int radius; // ������
	
	public Circle(int radius) { 
		this.radius = radius;
	}
	
	@Override
	public void draw() {
		System.out.print("������ " + radius + " ");
	}
	
	@Override
	public double getArea() { 
		return PI*radius*radius;
	}
}


public class ShapeApp {
	 public static void main(String [] args) {
		Shape coin = new Circle(10); // �������� 10�� ���� ��ü ����
		coin.redraw(); // ���� �ٽ� �׸���
		System.out.println("������ ������ " + coin.getArea());
	}
}
