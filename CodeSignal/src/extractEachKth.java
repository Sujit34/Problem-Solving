
public class extractEachKth {
	int[] solution(int[] inputArray, int k) {
		int x = (inputArray.length / k);
		int[] res = new int[inputArray.length - x];

		int count = 0;
		for (int i = 0, j = 0; i < inputArray.length; i++) {
			count++;
			if (count == k) {
				count = 0;
			} else {
				res[j++] = inputArray[i];
			}
		}
		return res;
	}
}
