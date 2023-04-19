
public class MergeStringsAlternately1768 {
	public static String mergeAlternately(String word1, String word2) {
		String str = "";

		int i = 0;
		while (i < word1.length() || i < word2.length()) {
			if (i <= word1.length() - 1 && i <= word2.length() - 1) {
				str = str + word1.charAt(i) + word2.charAt(i);
			} else if (i <= word1.length() - 1 && i > word2.length() - 1) {
				str = str + word1.charAt(i);
			} else if (i > word1.length() - 1 && i <= word2.length() - 1) {
				str = str + word2.charAt(i);
			}
			i++;
		}

		return str;
	}

	public static void main(String[] args) {
		System.out.println(mergeAlternately("abc", "pqr"));
		System.out.println(mergeAlternately("ab", "pqrs"));
		System.out.println(mergeAlternately("abcd", "pq"));
	}
}
