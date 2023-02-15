
public class Sqrtx69 {
	public static int mySqrt(int x) {
		int low = 1;
		int high = x;

		while (low <= high) {
			if (x == 0)
				return 0;
			int mid = (low + high) / 2;

			if (x / mid == mid)
				return mid;
			if ((x / (mid + 1)) < (mid + 1) && (x / mid) > mid)
				return mid;
			if ((x / mid) > mid)
				low = mid + 1;

			if ((x / mid) < mid)
				high = mid - 1;
		}

		return 0;
	}

	public static void main(String[] args) {
		System.out.println(mySqrt(1));
		System.out.println(mySqrt(4));
		System.out.println(mySqrt(8));
		System.out.println(mySqrt(2147483647));
	}
}
