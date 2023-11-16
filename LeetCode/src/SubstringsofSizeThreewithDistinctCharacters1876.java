
public class SubstringsofSizeThreewithDistinctCharacters1876 {
	public static void main(String[] args) {
		System.out.println(countGoodSubstrings("xyzzaz"));
		System.out.println(countGoodSubstrings("aababcabc"));
	}

	public static int countGoodSubstrings(String s) {
		int count = 0;
		int stringSize = 3;
		String str = "";

		int start = 0;
		int end = stringSize - 1;
		int i = start;
		while (end < s.length()) {
			str = str + s.charAt(i);

			if (i == end) {
				start++;
				end++;
				i = start;

				if (isUnique(str))
					count++;
				str = "";
			}

			else {
				i++;
			}
		}

		return count;
	}

	public static boolean isUnique(String str) {
		if ((str.charAt(0) != str.charAt(1)) && (str.charAt(1) != str.charAt(2)) && (str.charAt(0) != str.charAt(2)))
			return true;
		else
			return false;
	}
}
