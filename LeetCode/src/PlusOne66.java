
public class PlusOne66 {
	public static int[] plusOne(int[] digits) {
		int resLength = digits.length;
		int[] result = new int[resLength + 1];

		int sum = 1;
		for (int i = digits.length - 1; i >= 0; i--) {
			sum = sum + digits[i];
			if (sum == 10) {
				result[resLength] = 0;
				resLength--;
				sum = 1;
			} else {
				result[resLength] = sum;
				resLength--;
				sum = 0;
			}
		}
		if (sum == 1)
			result[resLength] = 1;
		if (result[0] == 0) {
			int[] res = new int[digits.length];
			for (int i = 1; i < result.length; i++) {
				res[i - 1] = result[i];
			}
			return res;
		}

		return result;
	}

	public static void main(String[] args) {
		int[] arr = { 1, 2, 3, 9 };
		var res = plusOne(arr);
		for (int i = 0; i < res.length; i++) {
			System.out.println(res[i]);
		}
	}
}
