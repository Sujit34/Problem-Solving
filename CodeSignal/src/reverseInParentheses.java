
public class reverseInParentheses {
	static String solution(String inputString) {

		int firstParnIndex = -1;
		int lastParnIndex = -1;
		for (int i = 0; i < inputString.length(); i++) {
			if (inputString.charAt(i) == '(')
				firstParnIndex = i;
		}
		if (firstParnIndex == -1)
			return inputString;

		for (int i = firstParnIndex; i < inputString.length(); i++) {
			if (inputString.charAt(i) == ')') {
				lastParnIndex = i;
				break;
			}
		}

		String firstPart = inputString.substring(0, firstParnIndex);
		String midPartPart = inputString.substring(firstParnIndex + 1, lastParnIndex);
		String lastPart = inputString.substring(lastParnIndex + 1);

		String revMidPart = "";

		for (int i = 0; i < midPartPart.length(); i++) {
			revMidPart = midPartPart.charAt(i) + revMidPart;
		}

		inputString = firstPart + revMidPart + lastPart;

		return solution(inputString);
	}

	public static void main(String[] args) {
		System.out.println(solution("foo(bar)baz(blim)"));
		System.out.println(solution("foo(bar(baz))blim"));
	}
}
