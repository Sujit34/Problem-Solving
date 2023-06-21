
public class StringsMakingAnagrams {
	public static int makeAnagram(String a, String b) {
		int[] arr = new int[26];
		int res = 0;

		for (int i = 0; i < a.length(); i++) {
			arr[a.charAt(i) - 'a']++;
		}

		for (int i = 0; i < b.length(); i++) {
			if (arr[b.charAt(i) - 'a'] > 0)
				arr[b.charAt(i) - 'a']--;
			else {
				res++;
			}
		}

		for (int i = 0; i < 26; i++)
			if (arr[i] > 0)
				res = res + arr[i];

		return res;
	}

	public static void main(String[] args) {
		System.out.println(makeAnagram("cde", "abc"));
	}
}
