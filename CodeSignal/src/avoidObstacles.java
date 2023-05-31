import java.util.Arrays;

public class avoidObstacles {
	static int solution(int[] inputArray) {

		Arrays.sort(inputArray);

		int max = inputArray[inputArray.length - 1];

		for (int i = 2; i < max; i++) {
			boolean flag = false;
			;
			for (int j = 0; j < inputArray.length; j++) {
				if (inputArray[j] % i == 0) {
					flag = true;
					break;
				}
			}
			if (flag == false)
				return i;
		}

		return max + 1;
	}

	public static void main(String[] args) {
		// int[] arr = {5, 3, 6, 7, 9};
		int[] arr = { 2, 3 };
		System.out.println(solution(arr));
	}
}
