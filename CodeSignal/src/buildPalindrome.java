public class buildPalindrome {
	static String solution(String st) {

		String str = st;
		int i = 0;
		int stLen = st.length();

		while (!isPalindrome(str)) {
			str = st + st.charAt(i) + str.substring(stLen);
			i++;
		}
		
		return str;
	}

	static boolean isPalindrome(String s) {

		int left = 0;
		int right = s.length() - 1;

		while (left < right) {
			if (s.charAt(left) != s.charAt(right))
				return false;
			left++;
			right--;
		}
		return true;
	}

	public static void main(String[] args) {
		System.out.println(solution("abcdc"));
	}
}
