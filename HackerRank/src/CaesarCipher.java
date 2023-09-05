
public class CaesarCipher {
	public static String caesarCipher(String s, int k) {
		String res = "";

		for (int i = 0; i < s.length(); i++) {
			if (s.charAt(i) >= 'A' && s.charAt(i) <= 'Z') {
				int temp = (int) s.charAt(i) + k%26;
				if (temp > 90)
					temp = 64 + ((temp -90));
				res = res + (char) temp;

			} else if (s.charAt(i) >= 'a' && s.charAt(i) <= 'z') {
				int temp = (int) s.charAt(i) + k%26;
				if (temp > 122)
					temp = 96 + ((temp - 122));
				res = res + (char) temp;
			} else {
				res = res + s.charAt(i);
			}
		}

		return res;
	}

	public static void main(String[] args) {
		System.out.println(caesarCipher("abcdefghijklmnopqrstuvwxyz", 2));
		System.out.println(caesarCipher("XYZ", 5));
	}
}
