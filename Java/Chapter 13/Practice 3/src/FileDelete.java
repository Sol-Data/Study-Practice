import java.io.File;

public class FileDelete {

	public static void main(String[] args) {
		File dir = new File("c:\\Temp\\");
		File [] files = dir.listFiles(); // ���丮�� ���� ����Ʈ
		
		for(int i=0; i<files.length; i++) {
			String name = files[i].getName();
			int index = name.lastIndexOf('.'); // ���ϸ� ���ڿ����� ���� �������� �ִ� '.' �� �ε���
			if(index == -1) // ã�� �� ����
				continue;
			String ext = name.substring(index); // ext = ".txt" 
			if(ext.equals(".txt")) {
				System.out.println(files[i].getPath() + " ����");
				files[i].delete();
			}
		}
	}

}