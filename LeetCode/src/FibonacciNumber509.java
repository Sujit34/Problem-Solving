
public class FibonacciNumber509 {
	public static int fib(int n) {
		if (n == 0)
			return 0;
		else if (n == 1)
			return 1;
		return fib(n - 1) + fib(n - 2);
	}

	public static void main(String[] args) {
		System.out.println(2);
		System.out.println(3);
		System.out.println(4);
	}
}
