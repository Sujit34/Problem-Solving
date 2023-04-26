
public class StringtoIntegeratoi8 {
	public static int myAtoi(String s) {

		boolean negative = false;
		boolean positive = false;
		long sum = 0;
		int digitCount = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s.charAt(i) == '-' && digitCount == 0 && negative == false) {
				if (positive == true)
					break;
				negative = true;
				continue;
			}
			if (s.charAt(i) == '+' && digitCount == 0 && positive == false) {
				if (negative == true)
					break;
				positive = true;
				continue;
			}
			if (s.charAt(i) == '-' && digitCount > 0)
				break;
			if (s.charAt(i) == '+' && digitCount > 0)
				break;
			if (s.charAt(i) == ' ' && (positive == false && negative == false) && digitCount == 0) {
				continue;
			}
			if ((s.charAt(i) == ' ' || s.charAt(i) == '+' || s.charAt(i) == '-') && positive == true) {
				break;
			}
			if ((s.charAt(i) == ' ' || s.charAt(i) == '+' || s.charAt(i) == '-') && negative == true) {
				break;
			}
			if (s.charAt(i) == ' ' && digitCount == 0) {
				continue;
			}

			if (!Character.isDigit(s.charAt(i))) {
				break;
			}
			if (Character.isDigit(s.charAt(i))) {
				sum = sum * 10 + (s.charAt(i) - '0');
				digitCount++;
			}

			if (sum >= Integer.MAX_VALUE) {
				break;

			}
			if (sum <= Integer.MIN_VALUE) {
				break;

			}
		}
		if (negative == true)
			sum = sum * (-1);
		if (sum >= Integer.MAX_VALUE) {
			sum = Integer.MAX_VALUE;

		}
		if (sum <= Integer.MIN_VALUE) {
			sum = Integer.MIN_VALUE;

		}

		return (int) sum;
	}

	public static void main(String[] args) {

		System.out.println(myAtoi("words and 987"));
		System.out.println(myAtoi("   -42"));
		System.out.println(myAtoi("4193 with words"));
		System.out.println(myAtoi("000-42"));
		System.out.println(myAtoi("3.1416"));
		System.out.println(myAtoi("-91283472332"));
		System.out.println(myAtoi("+-12"));
		System.out.println(myAtoi("-+12"));
		System.out.println(myAtoi("9223372036854775808"));
		System.out.println(myAtoi("    +   413"));
		System.out.println(myAtoi("0 123"));
		System.out.println(myAtoi(" ++1"));
	}
}
