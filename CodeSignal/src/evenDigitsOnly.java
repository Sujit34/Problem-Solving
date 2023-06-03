
public class evenDigitsOnly {
	boolean solution(int n) {

		while (n != 0) {
			if ((n % 10) % 2 != 0)
				return false;
			n = n / 10;
		}

		return true;

	}
}
