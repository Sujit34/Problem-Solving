
public class MaximumNumberofVowelsinaSubstringofGivenLength1456 {
	public static void main(String[] args) {
		// System.out.println(maxVowels("abciiidef", 3));
		System.out.println(maxVowels("aeiou", 2));
		System.out.println(maxVowels("weallloveyou", 7));
	}

	public static int maxVowels(String s, int k) {

		int i = 0;
		int count = 0;
		while (i < k) {
			if (isVowel(s.charAt(i)))
				count++;
			i++;
		}
		int max = count;
		while (i < s.length()) {
			if (isVowel(s.charAt(i)))
				count++;
			if (isVowel(s.charAt(i - k)))
				count--;
			i++;
			if (max < count)
				max = count;
		}

		return max;
	}

	public static boolean isVowel(char ch) {
		return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? true : false;
	}
}
