
public class HappyNumber202 {

	public static boolean isHappy(int n) {
		// Floyd's Cycle-Finding Algorithm
		int slowPointer = n;
		int firstPointer = next(n);
		while (firstPointer != 1 && firstPointer != slowPointer) {
			slowPointer = next(slowPointer);
			firstPointer = next(next(firstPointer));
		}

		return firstPointer == 1 ? true : false;
	}

	public static int next(int n) {
		int squareSum = 0;
		while (n != 0) {
			squareSum = squareSum + (n % 10) * (n % 10);
			n = n / 10;
		}
		return squareSum;
	}

	public static void main(String[] args) {
		System.out.println(isHappy(19));
		System.out.println(isHappy(2));
		System.out.println(isHappy(1));

	}

}
