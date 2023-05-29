
public class isIPv4Addres {
	static boolean solution(String inputString) {

		if (inputString.charAt(0) == '.')
			return false;

		int sum = 0;
		int dotCount = 0;

		for (int i = 0; i < inputString.length(); i++) {
			if (inputString.charAt(i) >= 'a' && inputString.charAt(i) <= 'z') {
				return false;
			} else if (inputString.charAt(i) == '.') {
				System.out.println(sum);
				dotCount++;
				if (inputString.charAt(i - 1) == '.')
					return false;
				if (sum < 0 || sum > 255)
					return false;
				sum = 0;
			} else if (inputString.length() - 1 == i) {
				System.out.println(sum);
				dotCount++;
				sum = sum * 10 + inputString.charAt(i) - '0';
				if (sum < 0 || sum > 255)
					return false;
			} else {
				if (sum == 0 && inputString.charAt(i) == '0' && i <= inputString.length() - 2
						&& inputString.charAt(i + 1) != '.')
					return false;
				sum = sum * 10 + inputString.charAt(i) - '0';
			}
		}
		return dotCount == 4 ? true : false;
	}

	public static void main(String[] args) {
		System.out.println(solution("172.16.254.1"));
	}

}
