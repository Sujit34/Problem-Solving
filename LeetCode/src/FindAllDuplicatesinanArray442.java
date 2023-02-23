import java.util.*;

public class FindAllDuplicatesinanArray442 {
	public static List<Integer> findDuplicates(int[] nums) {
/*
		List<Integer> list = new ArrayList<Integer>();
		HashSet<Integer> hashSet = new HashSet<Integer>();

		for (int i = 0; i < nums.length; i++) {
			if (!hashSet.contains(nums[i])) {
				hashSet.add(nums[i]);
			} else {
				list.add(nums[i]);
			}
		}

		return list;
*/
		// Flip-Flop (from discussion)
		List<Integer> list = new ArrayList<Integer>();

		for (int i = 0; i < nums.length; i++) {
			int index = Math.abs(nums[i]) - 1;
			if (nums[index] < 0) {
				list.add(Math.abs(nums[i]));
			} else {
				nums[index] = nums[index] * (-1);
			}
		}

		return list;

	}

	public static void main(String[] args) {
		int[] arr = { 4, 3, 2, 7, 8, 2, 3, 1 };
		var result = findDuplicates(arr);
		for (int i = 0; i < result.size(); i++) {
			System.out.println(result.get(i));
		}
	}
}
