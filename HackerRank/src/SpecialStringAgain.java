
public class SpecialStringAgain {
	public static long substrCount(int n, String s) {
		int res = s.length();

		for (int i = 0; i < s.length(); i++) {
			int repeat = 0;
			while (i < s.length() - 1 && s.charAt(i) == s.charAt(i + 1)) {
				i++;
				repeat++;
			}
			res = res + ((repeat * (repeat + 1)) / 2);
			int pointer = 1;
			while (i - pointer >= 0 && i + pointer < s.length() && s.charAt(i + pointer) == s.charAt(i - 1)
					&& s.charAt(i - pointer) == s.charAt(i - 1)) {
				pointer++;
				res++;
			}
		}
		return res;
	}

	public static void main(String[] args) {
		System.out.println(substrCount(5, "asasd"));
		System.out.println(substrCount(7, "abcbaba"));
		System.out.println(substrCount(4, "aaaa"));
	}
}
