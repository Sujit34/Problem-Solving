
public class CountPrimes204 {
	public static int countPrimes(int n) {
		int primeCount = 0;
		if (n == 0 || n == 1)
			return 0;
		boolean[] isPrime = new boolean[n + 1];
		for (int i = 1; i <= n; i++)
			isPrime[i] = true;
		for (int i = 2; i <= Math.sqrt(n); i++) {
			for (int j = i * i; j <= n; j = j + i) {
				isPrime[j] = false;
			}
		}
		for (int i = 2; i < n; i++) {
			if (isPrime[i] == true)
				primeCount++;
		}
		return primeCount;
	}

	public static void main(String[] args) {
		System.out.println(countPrimes(10));
		System.out.println(countPrimes(0));
		System.out.println(countPrimes(1));
		System.out.println(countPrimes(2));
	}
}
