import java.util.*;

public class FindAllAnagramsinaString438 {
	public static void main(String[] args) {
		var l = findAnagrams("abab", "ab");
		for (int i = 0; i < l.size(); i++) {
			System.out.println(l.get(i));
		}
	}

	public static List<Integer> findAnagrams(String s, String p) {
		List<Integer> list = new ArrayList<Integer>();
		int length = p.length();

		String str = "";
		int start = 0;
		int end = length;

		while (end <= s.length()) {
			str = s.substring(start, end);

			if (isAnagram(str, p))
				list.add(start);

			start++;
			end++;
			str = "";
		}

		return list;
	}

	public static boolean isAnagram(String str1, String str2) {
		boolean anagram = true;
		int[] arr = new int[26];
		for (int i = 0; i < str1.length(); i++) {
			arr[str1.charAt(i) - 'a']++;
		}
		for (int i = 0; i < str2.length(); i++) {
			arr[str2.charAt(i) - 'a']--;
		}

		for (int i = 0; i < 26; i++) {
			if (arr[i] != 0)
				anagram = false;
		}
		return anagram;
	}
}
