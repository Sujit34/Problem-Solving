import java.util.*;

public class NumberofGoodPairs1512 {
	public static int numIdenticalPairs(int[] nums) {
		int result = 0;
		/*
		 * int[] ans = new int[101]; for (int i = 0; i < nums.length; i++) { result +=
		 * ans[nums[i]]; ans[nums[i]]++; }
		 */
		HashMap<Integer, Integer> hashMap = new HashMap<Integer, Integer>();
		for (int i = 0; i < nums.length; i++) {
			if (!hashMap.containsKey(nums[i])) {
				hashMap.put(nums[i], 0);
				result += hashMap.get(nums[i]);

			} else {
				result += hashMap.get(nums[i]);
			}
			hashMap.put(nums[i], hashMap.get(nums[i]) + 1);
		}
		return result;
	}

	public static void main(String[] args) {
		// int[] arr = { 1, 2, 3, 1, 1, 3 };
		int[] arr = { 1, 1, 1, 1 };
		System.out.println(numIdenticalPairs(arr));
	}
}
