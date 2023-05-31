import java.util.Arrays;

public class avoidObstacles {
	int solution(int[] inputArray) {

		Arrays.sort(inputArray);

		int max = inputArray[inputArray.length - 1];

		for (int i = 2; i < max; i++) {
			for (int j = 0; j < inputArray.length; j++) {
				if (inputArray[i] % 2 == 0) {

				}
			}
		}

		return res;
	}
}
