import java.util.*;

public class TwoSum1 {
	public static int[] twoSum(int[] nums, int target) {
		int[] res = new int[2];
		HashMap<Integer, Integer> hashMap = new HashMap<Integer, Integer>();
		for (int i = 0; i < nums.length; i++) {
			int rest = target - nums[i];
			if (hashMap.containsKey(rest) && hashMap.get(rest) != i) {
				res[0] = i;
				res[1] = hashMap.get(rest);
				break;
			}
			hashMap.put(nums[i], i);

		}
		return res;
	}

	public static void main(String[] args) {
		int[] arr = { 2, 7, 11, 15 };
		var result = twoSum(arr, 9);
		System.out.println(result[0]);
		System.out.println(result[1]);

	}

}
