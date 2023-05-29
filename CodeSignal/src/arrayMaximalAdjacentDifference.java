
public class arrayMaximalAdjacentDifference {
	int solution(int[] inputArray) {
		int res = 0;
		for (int i = 0; i < inputArray.length - 1; i++) {
			int adjDiff = Math.abs(inputArray[i] - inputArray[i + 1]);
			res = adjDiff > res ? adjDiff : res;
		}
		return res;
	}
}
