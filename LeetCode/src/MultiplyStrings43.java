
public class MultiplyStrings43 {
	public static String multiply(String num1, String num2) {
		String res = "";

		int num1_length = num1.length();
		int num2_length = num2.length();

		int[] result = new int[num1_length + num2_length];

		if (num1_length == 0 || num2_length == 0) {
			return "0";
		}

		int pos_num1 = 0;
		int pos_num2 = 0;

		for (int i = num1_length - 1; i >= 0; i--) {
			int carry = 0;
			pos_num2 =0;
			int digit1 = num1.charAt(i) - '0';

			for (int j = num2_length - 1; j >= 0; j--) {
				int digit2 = num2.charAt(j) - '0';
				int sum = digit1 * digit2 + result[pos_num1 + pos_num2] + carry;
				result[pos_num1 + pos_num2] = sum % 10;
				carry = sum / 10;
				pos_num2++;

			}
			if (carry > 0)
				result[pos_num1 + pos_num2] = result[pos_num1 + pos_num2] + carry;
			pos_num1++;
		}

		int result_length = result.length - 1;
		while (result_length > 0 && result[result_length] == 0) {
			result_length--;
		}

		if (result_length == -1)
			return "0";

		while (result_length >= 0)
			res = res + result[result_length--];

		return res;
	}

	public static void main(String[] args) {
		System.out.println(multiply("123", "456"));
		System.out.println(multiply("2", "3"));
	}

}
