
public class NumberOfSubArraysOfSizeKAndAverageGreaterThanOrEqualToThreshold1343 {
	public static void main(String[] args) {
		int[] arr = { 11, 13, 17, 23, 29, 31, 7, 5, 2, 3 };
		int k = 3;
		int threshold = 5;
		System.out.println(numOfSubarrays(arr, k, threshold));
	}

	public static int numOfSubarrays(int[] arr, int k, int threshold) {
		int count = 0;

		long sum = 0;

		int start = 0;
		int end = k - 1;

		for (int i = start; i <= end; i++) {
			sum = sum + arr[i];
		}
		double avg = (double) sum / (double) k;

		if (avg >= threshold)
			count++;

		start++;
		end++;

		while (end < arr.length) {
			sum = sum - arr[start - 1] + arr[end];
			avg = (double) sum / (double) k;

			if (avg >= threshold)
				count++;

			start++;
			end++;
		}

		return count;
	}
}
