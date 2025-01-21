import java.util.*;

public class IsomorphicStrings205 {
	public static boolean isIsomorphic(String s, String t) {
		HashMap<Character, Character> hashMapst = new HashMap<Character, Character>();
		HashMap<Character, Character> hashMapts = new HashMap<Character, Character>();

		for (int i = 0; i < s.length(); i++) {
			if (hashMapst.containsKey(s.charAt(i))) {
				if (hashMapst.get(s.charAt(i)) != t.charAt(i))
					return false;

			} else {
				hashMapst.put(s.charAt(i), t.charAt(i));
			}

			if (hashMapts.containsKey(t.charAt(i))) {
				if (hashMapts.get(t.charAt(i)) != s.charAt(i))
					return false;

			} else {
				hashMapts.put(t.charAt(i), s.charAt(i));
			}
		}
		return true;

		/*
			HashMap<Character,Character> hashMap = new HashMap<>();
			for(int i=0;i<s.length();i++){
				if(!hashMap.containsKey(s.charAt(i))){
					if(!hashMap.containsValue(t.charAt(i))){
						hashMap.put(s.charAt(i),t.charAt(i));
					}
					else return false;
				}
				else{
					if(hashMap.get(s.charAt(i))!=t.charAt(i))return false;
				}
			}
			return true;
		 */
	}

	public static void main(String[] args) {
		System.out.println(isIsomorphic("egg", "add"));
		System.out.println(isIsomorphic("foo", "bar"));
		System.out.println(isIsomorphic("paper", "title"));
		System.out.println(isIsomorphic("badc", "baba"));
	}
}
