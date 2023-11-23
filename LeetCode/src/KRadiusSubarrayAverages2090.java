
public class KRadiusSubarrayAverages2090 {
	public static void main(String[] args) {
		int[] a = { 2, 2, 1 };
		int k = 1;

		var res = getAverages(a, k);

		for (int i = 0; i < res.length; i++) {
			System.out.println(res[i]);
		}
	}

	public static int[] getAverages(int[] nums, int k) {
		int[] arr = new int[nums.length];

		if (k >= nums.length) {
			for (int i = 0; i < nums.length; i++) {
				arr[i] = -1;
			}
			return arr;
		}
		if (k == 0) {
			return nums;
		}

		int start = k;
		int end = nums.length - 1 - k;

		for (int i = 0; i < start; i++) {
			arr[i] = -1;
		}

		for (int i = end + 1; i < nums.length; i++) {
			arr[i] = -1;
		}

		long sum = 0;
		if (start <= end) {
			for (int i = start - k; i <= start + k; i++) {
				sum = sum + nums[i];
			}
			arr[start] = (int) (sum / (2 * k + 1));
			start++;

			while (start <= end) {
				sum = sum - nums[start - k - 1] + nums[start + k];
				arr[start] = (int) (sum / (2 * k + 1));
				start++;
			}
		}
		return arr;
	}

}
