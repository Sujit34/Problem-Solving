
public class arrayMaxConsecutiveSum {
	int solution(int[] inputArray, int k) {
		int max = Integer.MIN_VALUE;

		for (int i = 0; i <= inputArray.length - k; i++) {
			int sum = 0;
			for (int j = i; j < i + k; j++) {
				sum = sum + inputArray[j];
			}

			if (max < sum)
				max = sum;
		}

		return max;
	}

}
