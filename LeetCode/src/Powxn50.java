
public class Powxn50 {
	public static double myPow(double x, int n) {
		int partition = 100000;
		boolean negative = false;
		if (x < 0) {
			negative = true;
			x = x * (-1);
		}

		boolean reversePower = false;
		boolean maxNegativeNumber = false;
		if (n < 0) {
			reversePower = true;
			if (n == -2147483648) {
				n = -2147483647;
				maxNegativeNumber = true;
			}
			n = n * (-1);
		}

		int reminder = n % partition;
		int quotient = n / partition;

		double onePartitionResult = 1.0;
		double allPartitionResult = 1.0;

		if (quotient != 0) {
			for (int i = 1; i <= partition; i++) {
				onePartitionResult = onePartitionResult * x;
			}
			for (int i = 1; i <= quotient; i++) {
				allPartitionResult = allPartitionResult * onePartitionResult;
			}
		}

		for (int i = 1; i <= reminder; i++) {
			allPartitionResult = allPartitionResult * x;
		}

		if (negative == true && n % 2 == 1)
			allPartitionResult = allPartitionResult * (-1);

		if (maxNegativeNumber == true)
			allPartitionResult = allPartitionResult * x;

		if (maxNegativeNumber == true && negative == true)
			allPartitionResult = allPartitionResult * (-1);

		if (reversePower == true)
			allPartitionResult = 1 / allPartitionResult;

		return allPartitionResult;
	}

	public static void main(String[] args) {

		System.out.println(myPow(2.00000, 10));
		System.out.println(myPow(2.10000, 3));
		System.out.println(myPow(2.00000, -2));
		System.out.println(myPow(.0000200000, 2147483647));
		System.out.println(myPow(-2.00000, 2));
		System.out.println(myPow(-1.00001, 447125));
		System.out.println(myPow(2.00000, -2147483648));
		System.out.println(myPow(-1.00000, -2147483648));
		System.out.println(myPow(1.00000, -2147483648));
	}
}
