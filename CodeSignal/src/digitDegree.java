
public class digitDegree {
	int numberOfTimetoReplace = 0;

	int solution(int n) {
		int count = 0;
		int sum = 0;

		while (n != 0) {
			sum = sum + n % 10;
			n = n / 10;
			count++;
		}

		if (count == 1)
			return numberOfTimetoReplace;
		numberOfTimetoReplace++;
		return solution(sum);

	}

}
