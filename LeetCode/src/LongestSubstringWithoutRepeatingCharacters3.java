import java.util.*;

public class LongestSubstringWithoutRepeatingCharacters3 {
	public static int lengthOfLongestSubstring(String s) {
		int maxLength = 0;
		HashMap<Character, Integer> map = new HashMap<Character, Integer>();

		for (int i = 0; i < s.length(); i++) {
			if (map.containsKey(s.charAt(i))) {
				int count = map.size();
				if (maxLength < count) {
					maxLength = count;
				}
				i = map.get(s.charAt(i)) + 1;
				map.clear();

			}
			map.put(s.charAt(i), i);
			if (i == s.length() - 1 && maxLength < map.size()) {
				maxLength = map.size();
			}
		}

		return maxLength;
	}

	public static void main(String[] args) {
		System.out.println(lengthOfLongestSubstring("abcabcbb"));
		System.out.println(lengthOfLongestSubstring("bbbbb"));
		System.out.println(lengthOfLongestSubstring("pwwkew"));
		System.out.println(lengthOfLongestSubstring("dvdf"));
		System.out.println(lengthOfLongestSubstring(""));
		System.out.println(lengthOfLongestSubstring(" "));
	}

}
