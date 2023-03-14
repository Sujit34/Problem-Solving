
public class GoalParserInterpretation1678 {
	public static String interpret(String command) {
		String result = "";

		for (int i = 0; i < command.length(); i++) {
			if (command.charAt(i) == 'G')
				result = result + 'G';
			else if (command.charAt(i) == '(' && command.charAt(i + 1) == ')') {
				result = result + 'o';
				i = i + 1;
			} else if (command.charAt(i) == '(' && command.charAt(i + 1) == 'a') {
				result = result + 'a';
				result = result + 'l';
				i = i + 3;
			}
		}

		return result;
	}

	public static void main(String[] args) {
		System.out.println(interpret("G()()()()(al)"));
	}
}
