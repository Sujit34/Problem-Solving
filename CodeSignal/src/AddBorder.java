
public class AddBorder {
	String[] solution(String[] picture) {
		int len = picture[0].length() + 2;

		String[] result = new String[picture.length + 2];

		for (int i = 0; i < picture.length; i++) {
			picture[i] = '*' + picture[i] + '*';
		}

		for (int i = 0; i < len; i++) {
			result[0] = i == 0 ? "*" : result[0] + "*";
			result[picture.length + 1] = i == 0 ? "*" : result[picture.length + 1] + "*";
		}

		for (int i = 0; i < picture.length; i++) {
			result[i + 1] = picture[i];
		}

		return result;
	}
}
