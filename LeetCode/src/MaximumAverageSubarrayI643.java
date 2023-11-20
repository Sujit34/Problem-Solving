
public class MaximumAverageSubarrayI643 {
	public static void main(String[] args) {
		int[] arr = { 0, 4, 0, 3, 2 };
		System.out.println(findMaxAverage(arr, 1));
	}

	public static double findMaxAverage(int[] nums, int k) {
		double avg = 0.0;

		int sum = 0;
		int start = 0;
		int end = k - 1;
		while (start <= end) {
			sum = sum + nums[start];
			start++;
		}

		avg = (double) sum / (double) k;
		end = end + 1;

		while (end < nums.length) {
			sum = sum - nums[end - k] + nums[end];
			double average = (double) sum / (double) k;
			if (avg < average) {
				avg = average;
			}
			end++;
		}

		return avg;
	}
}
