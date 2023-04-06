
public class FindtheIndexoftheFirstOccurrenceinaString28 {
	public static int strStr(String haystack, String needle) {
		if (haystack.length() < needle.length())
			return -1;
		for (int i = 0; i <= haystack.length() - needle.length(); i++) {
			int j = 0;
			while (j < needle.length() && haystack.charAt(i + j) == needle.charAt(j)) {
				j++;
				if (j == needle.length())
					return i;
			}
		}
		return -1;
	}

	public static void main(String[] args) {
		System.out.println(strStr("sadbutsad", "sad"));
		System.out.println(strStr("leetcode", "leeto"));
		System.out.println(strStr("a", "a"));
		System.out.println(strStr("mississippi", "issip"));
		System.out.println(strStr("mississippi", "ssipia"));
	}
}
