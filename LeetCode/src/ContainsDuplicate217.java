import java.util.*;

public class ContainsDuplicate217 {
	public static boolean containsDuplicate(int[] nums) {
		/*HashMap<Integer, Boolean> hashMap = new HashMap<Integer, Boolean>();
		for (int i = 0; i < nums.length; i++) {
			if (hashMap.containsKey(nums[i]))
				return true;
			hashMap.put(nums[i], true);
		}
		return false;
		*/
		HashSet<Integer> hashSet = new HashSet<Integer>();
		for (int i = 0; i < nums.length; i++) {
			if (hashSet.contains(nums[i]))
				return true;
			hashSet.add(nums[i]);
		}
		return false;
	}

	public static void main(String[] args) {
		 int arr[] = { 1, 2, 3, 1 };
		// int arr[] = {1,2,3,4};
		// int arr[] = {1,3,3,4};
		System.out.println(containsDuplicate(arr));
	}
}
