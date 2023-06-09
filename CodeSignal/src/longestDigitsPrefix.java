
public class longestDigitsPrefix {
	String solution(String inputString) {
		String str = "";
		for (int i = 0; i < inputString.length(); i++) {
			if (Character.isDigit(inputString.charAt(i)))
				str = str + inputString.charAt(i);
			else
				break;
		}
		return str;

	}

}
