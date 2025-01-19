import java.util.*;

public class MajorityElement169 {
	public static int majorityElement(int[] nums) {
		/*
		HashMap<Integer, Integer> hashMap = new HashMap<Integer, Integer>();
		for (int i = 0; i < nums.length; i++) {
			if (hashMap.containsKey(nums[i])) {
				hashMap.put(nums[i], hashMap.get(nums[i]) + 1);
			} else {
				hashMap.put(nums[i], 1);
			}
		}

		int max = 0;
		int key = 0;
		var iterator = hashMap.entrySet().iterator();
		while (iterator.hasNext()) {
			Map.Entry mapElement = (Map.Entry) iterator.next();
			if (max < (int) mapElement.getValue()) {
				max = (int) mapElement.getValue();
				key = (int) mapElement.getKey();
			}

		}
		return key;
		*/

		/*
		 * https://www.youtube.com/watch?v=wD7fs5P_MVo
		 * Moore Voting Algorithm
		 */

		int candidate = 0;
		int count =0;
		for(int num:nums){
			if(count==0){
				candidate = num;
				count++;
			}
			else{
				if(num==candidate)count++;
				else count--;
			}
		}
		return candidate;
	}

	public static void main(String[] args) {
		// int[] arr = { 2, 2, 1, 1, 1, 2, 2 };
		int[] arr = { 3, 3, 4 };
		System.out.println(majorityElement(arr));
	}
}
