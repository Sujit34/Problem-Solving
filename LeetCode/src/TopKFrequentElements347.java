import java.util.*;

public class TopKFrequentElements347 {
	public static int[] topKFrequent(int[] nums, int k) {
		int[] result = new int[k];
		HashMap<Integer, Integer> hashMap = new HashMap<Integer, Integer>();
		List<Integer> bucket[] = new ArrayList[nums.length + 1];

		for (int i = 0; i < nums.length; i++) {
			if (!hashMap.containsKey(nums[i]))
				hashMap.put(nums[i], 1);
			else
				hashMap.put(nums[i], hashMap.get(nums[i]) + 1);
		}

		for (int key : hashMap.keySet()) {
			if (bucket[hashMap.get(key)] == null)
				bucket[hashMap.get(key)] = new ArrayList<>();

			bucket[hashMap.get(key)].add(key);
		}

		for (int i = bucket.length - 1, index = 0; i >= 0; i--) {
			if (bucket[i] != null) {
				for (int j = 0; j < bucket[i].size(); j++) {
					result[index++] = bucket[i].get(j);
					if (index == k)
						return result;
				}
			}
		}

		return result;
	}

	public static void main(String[] args) {
		int[] arr = { 1, 1, 1, 2, 2, 3 };
		var res = topKFrequent(arr, 2);
		for (int i = 0; i < res.length; i++) {
			System.out.println(res[i]);
		}
	}
}
