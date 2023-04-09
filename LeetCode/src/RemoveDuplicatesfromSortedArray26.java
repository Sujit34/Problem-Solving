
public class RemoveDuplicatesfromSortedArray26 {
	public static int removeDuplicates(int[] nums) {
		int index = 0;
		for (int i = 0; i < nums.length; i++) {
			nums[index] = nums[i];
			while (i < nums.length - 1 && nums[i] == nums[i + 1]) {
				i++;
			}
			index++;
		}

		return index;

	}

	public static void main(String[] args) {
		int[] arr = { 1, 1, 2 };
		System.out.println(removeDuplicates(arr));
	}
}
