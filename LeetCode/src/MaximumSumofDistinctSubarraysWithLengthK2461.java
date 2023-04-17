import java.util.*;

public class MaximumSumofDistinctSubarraysWithLengthK2461 {
	public static long maximumSubarraySum(int[] nums, int k) {
		long result = Integer.MIN_VALUE;
		long runningSum = 0;
		int windowStart = 0;

		HashMap<Integer, Integer> hashMap = new HashMap<Integer, Integer>();

		for (int windowEnd = 0; windowEnd < nums.length; windowEnd++) {
			if (hashMap.containsKey(nums[windowEnd])) {
				int temp = hashMap.get(nums[windowEnd]);

				while (windowStart <= temp) {
					hashMap.remove(nums[windowStart]);
					runningSum = runningSum - nums[windowStart++];
				}
			}
			hashMap.put(nums[windowEnd], windowEnd);

			runningSum = runningSum + nums[windowEnd];
			if (windowEnd - windowStart + 1 == k) {
				if (result < runningSum)
					result = runningSum;
				hashMap.remove(nums[windowStart]);
				runningSum = runningSum - nums[windowStart++];
			}
		}

		return result == Integer.MIN_VALUE ? 0 : result;
	}

	public static void main(String[] args) {
		int[] arr = { 9, 9, 9, 1, 2, 3 };
		// int[] arr= {5,3,3,1,1};
		// int[] arr = {1,5,4,2,9,9,9};
		// int[] arr = {4,4,4};
		// int[] arr = {3,2,3,1};
		System.out.println(maximumSubarraySum(arr, 3));
	}
}
