
public class MoveZeroes283 {
	public static void moveZeroes(int[] nums) {
		int p = 0;
		for (int i = 0; i < nums.length; i++) {
			if (nums[i] != 0) {
				nums[p] = nums[i];
				p++;
			}
		}
		while (p < nums.length) {
			nums[p] = 0;
			p++;
		}

		for (int i = 0; i < nums.length; i++)
			System.out.println(nums[i]);

	}

	public static void main(String[] args) {
		int[] arr = { 0, 1, 0, 3, 12 };
		moveZeroes(arr);
	}
}
