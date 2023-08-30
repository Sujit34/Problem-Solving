
public class Pangrams {
	public static String pangrams(String s) {
		s = s.toLowerCase();
		int[] a = new int[26];
		for (int i = 0; i < s.length(); i++) {
			if (s.charAt(i) != ' ')
				a[s.charAt(i) - 'a']++;
		}

		for (int i = 0; i < 26; i++)
			if (a[i] == 0)
				return "not pangram";
		return "pangram";
	}

	public static void main(String[] args) {
		System.out.println(pangrams("We promptly judged antique ivory buckles for the next prize"));
		System.out.println(pangrams("We promptly judged antique ivory buckles for the prize"));
	}

}
