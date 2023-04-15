public class MinimumSizeSubarraySum209 {
	public static int minSubArrayLen(int target, int[] nums) {
		int minLength = Integer.MAX_VALUE;
		int windowStart = 0;
		int runningSum = 0;

		for (int windowEnd = 0; windowEnd < nums.length; windowEnd++) {
			if (runningSum < target) {
				runningSum = runningSum + nums[windowEnd];
			}
			while (runningSum >= target) {
				if (minLength > windowEnd - windowStart + 1) {
					minLength = windowEnd - windowStart + 1;
				}
				runningSum = runningSum - nums[windowStart];
				windowStart++;
			}
		}

		return minLength == Integer.MAX_VALUE ? 0 : minLength;
	}

	public static void main(String[] args) {
		int[] arr = { 1 };
		System.out.println(minSubArrayLen(11, arr));
	}
}
