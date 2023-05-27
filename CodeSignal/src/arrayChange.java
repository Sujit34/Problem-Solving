
public class arrayChange {
	int solution(int[] inputArray) {
		int count = 0;

		for (int i = 1; i < inputArray.length; i++) {
			if (inputArray[i] == inputArray[i - 1]) {
				inputArray[i] = inputArray[i] + 1;
				count++;
			}
			if (inputArray[i] <= inputArray[i - 1]) {
				count += inputArray[i - 1] + 1 - inputArray[i];
				inputArray[i] = inputArray[i - 1] + 1;
			}
		}
		return count;
	}
}
