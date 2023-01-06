
public class ArrangingCoins441 {
	public static int arrangeCoins(int n) {

		long low = 0;
		long high = n;
		int result = 0;
		while (low <= high) {
			long mid = (low + high) / 2;

			long sum = (mid * (mid + 1)) / 2;

			if (sum == n) {
				result = (int)mid;
				break;
			} else if (n - sum < mid + 1 && n - sum > 0) {
				result = (int)mid ;
				break;
			}

			else if (n - sum >= mid + 1)
				low = mid + 1;
			else if (n - sum < 0)
				high = mid - 1;
		}

		return result;
	}

	public static void main(String[] args) {
		System.out.println(arrangeCoins(5));
	}
}
