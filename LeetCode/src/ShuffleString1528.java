
public class ShuffleString1528 {
	public static String restoreString(String s, int[] indices) {
		char[] str = new char[s.length()];

		for (int i = 0; i < s.length(); i++) {
			str[indices[i]] = s.charAt(i);
		}

		return new String(str);
	}

	public static void main(String[] args) {
		int[] arr = { 0, 1, 2 };
		System.out.println(restoreString("abc", arr));
	}
}
