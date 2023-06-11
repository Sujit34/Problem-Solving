
public class FindEmailDomain {
	String solution(String address) {
		String str = "";
		for (int i = address.length() - 1; i > 0; i--) {
			if (address.charAt(i) != '@')
				str = address.charAt(i) + str;
			if (address.charAt(i) == '@')
				break;
		}
		return str;
	}
}
