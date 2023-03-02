
public class FindthePivotInteger2485 {
	public static int pivotInteger(int n) {

		int totalSum = (n * (n + 1)) / 2;
		for (int i = 1; i <= n; i++) {
			int subSum = (i * (i + 1)) / 2;

			if (subSum == (totalSum - subSum) + i)
				return i;
		}
		return -1;
	}

	public static void main(String[] args) {
		System.out.println(pivotInteger(8));
		System.out.println(pivotInteger(1));
		System.out.println(pivotInteger(4));
	}
}
