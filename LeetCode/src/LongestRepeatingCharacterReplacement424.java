
public class LongestRepeatingCharacterReplacement424 {
	public static int characterReplacement(String s, int k) {
		int result = 0;
		int windowStart = 0;
		int max = 0;
		int windowLength = 0;
		int[] array = new int[26];

		for (int windowEnd = 0; windowEnd < s.length(); windowEnd++) {
			array[s.charAt(windowEnd) - 'A']++;
			if (max < array[s.charAt(windowEnd) - 'A']) {
				max = array[s.charAt(windowEnd) - 'A'];
			}
			windowLength = windowEnd - windowStart + 1;
			if (windowLength - max > k) {
				array[s.charAt(windowStart) - 'A']--;
				windowStart++;
			}
			windowLength = windowEnd - windowStart + 1;
			if (result < windowLength) {
				result = windowLength;
			}
		}

		return result;
	}

	public static void main(String[] args) {
		System.out.println(characterReplacement("ABAB", 2));
		System.out.println(characterReplacement("AABABBA", 1));
	}
}
