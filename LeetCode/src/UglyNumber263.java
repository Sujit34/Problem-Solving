
public class UglyNumber263 {
	public static boolean isUgly(int n) {
		if (n <= 0)
			return false;

		int[] arr = { 2, 3, 5 };
		for (int i = 0; i < arr.length; i++) {
			while (n % arr[i] == 0) {
				n = n / arr[i];
			}
		}
		return n == 1 ? true : false;
	}

	public static void main(String[] args) {
		System.out.println(isUgly(14));
		System.out.println(isUgly(6));
	}
}
