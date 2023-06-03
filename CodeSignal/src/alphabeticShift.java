
public class alphabeticShift {
	String solution(String inputString) {
		String res = "";

		for (int i = 0; i < inputString.length(); i++) {
			if (inputString.charAt(i) == 'z')
				res = res + 'a';
			else
				res = res + (char) (inputString.charAt(i) + 1);
		}

		return res;

	}

}
