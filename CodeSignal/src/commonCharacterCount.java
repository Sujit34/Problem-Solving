import java.util.*;

public class commonCharacterCount {
	static int solution(String s1, String s2) {
		HashMap<Character, Integer> hashMap1 = new HashMap<Character, Integer>();
		HashMap<Character, Integer> hashMap2 = new HashMap<Character, Integer>();

		for (int i = 0; i < s1.length(); i++) {
			if (hashMap1.containsKey(s1.charAt(i))) {
				hashMap1.put(s1.charAt(i), hashMap1.get(s1.charAt(i)) + 1);
			} else {
				hashMap1.put(s1.charAt(i), 1);
			}
		}

		for (int i = 0; i < s2.length(); i++) {
			if (hashMap2.containsKey(s2.charAt(i))) {
				hashMap2.put(s2.charAt(i), hashMap2.get(s2.charAt(i)) + 1);
			} else {
				hashMap2.put(s2.charAt(i), 1);
			}
		}

		int commonCount = 0;
		for (Map.Entry<Character, Integer> entity : hashMap1.entrySet()) {
			commonCount += Math.min(entity.getValue(),
					hashMap2.containsKey(entity.getKey()) ? hashMap2.get(entity.getKey()) : 0);
		}
		return commonCount;
	}

	public static void main(String[] args) {
		System.out.println(solution("aabcc", "adcaa"));
	}

}
