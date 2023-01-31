public class ReverseString344 {
	public static void reverseString(char[] s) {

		int i = 0, j = s.length - 1;
		while (i < j) {
			char temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			i++;
			j--;
		}

		for (int p = 0; p < s.length; p++)
			System.out.print(s[p]);
	}

	public static void main(String[] args) {
		// char[] strs = { 'h', 'e', 'l', 'l', 'o' };
		// char[] strs = {'H','a','n','n','a','h'};
		char[] strs = { 'A', ' ', 'm', 'a', 'n', ',', ' ', 'a', ' ', 'p', 'l', 'a', 'n', ',', ' ', 'a', ' ', 'c', 'a',
				'n', 'a', 'l', ':', ' ', 'P', 'a', 'n', 'a', 'm', 'a' };
		reverseString(strs);
	}
}
