import java.util.*;

public class LongestSubstringWithoutRepeatingCharacters3 {
	public static int lengthOfLongestSubstring(String s) {
		
		/*
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
		
		*/
		
		int maxLength = 0;
		int start = 0;
		HashMap<Character, Integer> hashMap = new HashMap<Character, Integer>();
		int i=start;
		while(i<s.length()) {
			if(hashMap.containsKey(s.charAt(i))) {
				int count = hashMap.size();				
				if(maxLength<count) {
					maxLength = count;
				}
				hashMap.clear();
				i= start+1;
				start++;
			}
			else {
				hashMap.put(s.charAt(i), 1);
				if(i==s.length()-1 && maxLength<hashMap.size()) {
					maxLength = hashMap.size();
				}
				i++;
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
