import java.util.*;

public class HV {
	public static Vector<String> hashToVector(HashMap<String, String> h) {
		Vector<String> v = new Vector<String>(); // 벡터 생성	
		Set<String> s = h.keySet(); // 해시맵 h로부터 키의 Set 컬렉션 s 얻기
		Iterator<String> it = s.iterator();
		while(it.hasNext()) {
			String key  = it.next();
			v.add(h.get(key)); // '값'을 벡터에 삽입
		}
		return v; //리턴 문
	}
	
	public static void main(String [] args) {
		HashMap<String, String> h = new HashMap<String, String>(); // 해시맵 h 생성
		h.put("범죄", "112");
		h.put("화재", "119");
		h.put("전화번호", "114");
		
		Vector<String> v = hashToVector(h); // hashToVector() 호출
		for(int n=0; n<v.size(); n++) // v의 모든 요소에 대해 반복
			System.out.print(v.get(n) + " ");
	}
}
