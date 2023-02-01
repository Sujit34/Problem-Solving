import java.util.*;

public class FirstUniqueCharacterinaString387 {
	public static int firstUniqChar(String s) {

		HashMap<Character, Integer> hashMap = new HashMap<Character, Integer>();
		int[] characters = new int[26];
		for (int i = 0; i < s.length(); i++) {
			if (!hashMap.containsKey(s.charAt(i))) {
				hashMap.put(s.charAt(i), i);
			}
			characters[s.charAt(i) - 'a']++;
		}

		var iterator = hashMap.entrySet().iterator();
		int index = s.length();
		while (iterator.hasNext()) {
			Map.Entry mapElement = (Map.Entry) iterator.next();
			char key = (char) mapElement.getKey();
			if (characters[key - 'a'] == 1) {
				if (index > (int) mapElement.getValue()) {
					index = (int) mapElement.getValue();
				}

			}
		}

		return index == s.length() ? -1 : index;
	}

	public static void main(String[] args) {
		System.out.println(firstUniqChar("leetcode"));
	}
}
