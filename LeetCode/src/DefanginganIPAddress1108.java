
public class DefanginganIPAddress1108 {
	public static String defangIPaddr(String address) {
		String s = "";
		for (int i = 0; i < address.length(); i++) {
			if (address.charAt(i) == '.') {
				s = s + "[.]";
			} else
				s = s + address.charAt(i);
		}
		return s;
	}

	public static void main(String[] args) {
		System.out.println(defangIPaddr("255.100.50.0"));
	}
}
