
public class AddBinary67 {
	public static String addBinary(String a, String b) {
		String result = "";

		int aLength = a.length() - 1;
		int bLength = b.length() - 1;

		int sum = 0;
		int carry = 0;

		while (aLength >= 0 && bLength >= 0) {
			sum = carry + a.charAt(aLength) - '0' + b.charAt(bLength) - '0';

			if (sum == 0) {
				result = "0" + result;
				carry = 0;
			}
			if (sum == 1) {
				result = "1" + result;
				carry = 0;
			}
			if (sum == 2) {
				result = "0" + result;
				carry = 1;
			}
			if (sum == 3) {
				result = "1" + result;
				carry = 1;
			}
			aLength--;
			bLength--;
		}
		while (aLength >= 0) {
			sum = carry + a.charAt(aLength) - '0';

			if (sum == 0) {
				result = "0" + result;
				carry = 0;
			}
			if (sum == 1) {
				result = "1" + result;
				carry = 0;
			}
			if (sum == 2) {
				result = "0" + result;
				carry = 1;
			}
			if (sum == 3) {
				result = "1" + result;
				carry = 1;
			}
			aLength--;
		}

		while (bLength >= 0) {
			sum = carry + b.charAt(bLength) - '0';

			if (sum == 0) {
				result = "0" + result;
				carry = 0;
			}
			if (sum == 1) {
				result = "1" + result;
				carry = 0;
			}
			if (sum == 2) {
				result = "0" + result;
				carry = 1;
			}
			if (sum == 3) {
				result = "1" + result;
				carry = 1;
			}
			bLength--;
		}
		if (carry == 1)
			result = "1" + result;

		return result;
	}

	public static void main(String[] args) {
		System.out.println(addBinary("1111", "1111"));
		System.out.println(addBinary("0", "0"));
		System.out.println(addBinary("11", "1"));
		System.out.println(addBinary("1010", "1011"));
	}
}
