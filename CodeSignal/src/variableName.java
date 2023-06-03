
public class variableName {
	boolean solution(String name) {

		if (Character.isDigit(name.charAt(0)))
			return false;
		else {
			for (int i = 0; i < name.length(); i++) {
				if (!Character.isAlphabetic(name.charAt(i)) && !Character.isDigit(name.charAt(i))
						&& name.charAt(i) != '_')
					return false;
			}
		}
		return true;
	}

}
