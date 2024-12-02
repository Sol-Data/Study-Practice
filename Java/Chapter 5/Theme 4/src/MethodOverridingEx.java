class Shape { // ������ ���� Ŭ����
	public void draw() {
		System.out.println("Shape");
	}
}
class Line extends Shape {
	public void draw() { // �޼ҵ� �������̵�
		System.out.println("Line");
	}
}
class Rect extends Shape {
	public void draw() { // �޼ҵ� �������̵�
		System.out.println("Rect");
	}
}
class Circle extends Shape {
	public void draw() { // �޼ҵ� �������̵�
		System.out.println("Circle");
	}
}

public class MethodOverridingEx {
	static void paint(Shape p) { // Shape�� ��ӹ��� ��� ��ü���� �Ű� ������ �Ѿ�� �� ����
		p.draw(); // p�� ����Ű�� ��ü�� �������̵��� draw() ȣ��. ���� ���ε�
	}
	public static void main(String[] args) {
		Line line = new Line();
		paint(line); // Line�� draw() �޼ҵ� ����. "Line" ���

		// ���� ȣ����� ��� paint() �޼ҵ� ������ Shape�� ���� ���۷��� p�� ��ĳ���õ�
		paint(new Shape()); // Shape�� draw() ����. "Shape" ���	
		paint(new Line()); // �������̵��� �޼ҵ� Line�� draw() ����, "Line" ���		
		paint(new Rect()); // �������̵��� �޼ҵ� Rect�� draw() ����, "Rect" ���		
		paint(new Circle()); // �������̵��� �޼ҵ� Circle�� draw() ����, "Circle" ���
	}
}