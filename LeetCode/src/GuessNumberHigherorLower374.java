
public class GuessNumberHigherorLower374 {
	public static int guessNumber(int n) {

		long low = 0;
		long high = n;
		long result = 0;
		while (low <= high) {
			long sum = low + high;
			long mid = (sum / 2);
			if (guess((int) mid) == 0) {
				result = mid;
				break;
			} else if (guess((int) mid) == 1)
				low = mid + 1;
			else if (guess((int) mid) == -1)
				high = mid - 1;
		}

		return (int) result;
	}

	public static int guess(int num) {
		int pick = 1702766719;

		if (num > pick)
			return -1;
		else if (num < pick)
			return 1;
		else
			return 0;
	}

	public static void main(String[] args) {
		System.out.println(guessNumber(2126753390));
	}

}
