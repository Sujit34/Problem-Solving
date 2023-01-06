public class ValidPerfectSquare367 {
	public static boolean isPerfectSquare(int num) {

		long low = 0;
		long high = num;
		while (low <= high) {
			long mid = (low + high) / 2;
			if (mid * mid == num)
				return true;
			else if (mid * mid < num)
				low = mid + 1;
			else if (mid * mid > num)
				high = mid - 1;
		}

		return false;
	}

	public static void main(String[] args) {
		System.out.println(isPerfectSquare(2147483647));
	}
}
