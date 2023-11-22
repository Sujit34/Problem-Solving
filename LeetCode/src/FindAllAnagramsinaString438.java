import java.util.*;

public class FindAllAnagramsinaString438 {
	public static void main(String[] args) {
		var l = findAnagrams("aaaaaaaaaa", "aaaaaaaaaaaaa");
		for (int i = 0; i < l.size(); i++) {
			System.out.println(l.get(i));
		}
	}

	public static List<Integer> findAnagrams(String s, String p) {
		List<Integer> list = new ArrayList<Integer>();
		if (s.length() < p.length())
			return list;
		int length = p.length();

		String str = "";
		int start = 0;
		int end = length - 1;

		boolean anagram = false;
		for (int i = start; i <= end; i++) {
			str = str + s.charAt(i);
		}
		if (isAnagram(str, p)) {
			list.add(start);
			anagram = true;
		}

		start++;
		end++;

		while (end < s.length()) {
			if (anagram == true && s.charAt(start - 1) == s.charAt(end)) {
				list.add(start);
				str = str.substring(1) + s.charAt(end);
			} else if (anagram == false && s.charAt(start - 1) != s.charAt(end)) {
				str = str.substring(1) + s.charAt(end);
				if (isAnagram(str, p)) {
					list.add(start);
					anagram = true;
				}
			} else {
				anagram = false;
				str = str.substring(1) + s.charAt(end);
			}
			start++;
			end++;
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
