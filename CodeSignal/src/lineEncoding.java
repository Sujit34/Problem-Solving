
public class lineEncoding {
	static String solution(String s) {

		String str = "";

		for (int i = 0; i < s.length(); i++) {
			int start = i;

			while (i < s.length() - 1 && s.charAt(i) == s.charAt(i + 1)) {
				i++;
			}

			str = str + ((i - start) > 1 ? (i - start) + 1 : "") + s.charAt(start);
			start = i;
		}

		return str;
	}

	public static void main(String[] args) {
		System.out.println(solution("aabbbc"));
	}

}
