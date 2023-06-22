
public class AlternatingCharacters {
	public static int alternatingCharacters(String s) {
		int res = 0;

		for (int i = 0; i < s.length() - 1; i++) {
			int count = 0;
			while (s.charAt(i) == s.charAt(i + 1)) {
				count++;
				i++;
				if (i == s.length() - 1)
					break;
			}

			res = res + count;
		}
		return res;
	}

	public static void main(String[] args) {
		System.out.println(alternatingCharacters("AAAA"));
		System.out.println(alternatingCharacters("BBBBB"));
		System.out.println(alternatingCharacters("ABABABAB"));
		System.out.println(alternatingCharacters("BABABA"));
		System.out.println(alternatingCharacters("AAABBB"));
	}
}
