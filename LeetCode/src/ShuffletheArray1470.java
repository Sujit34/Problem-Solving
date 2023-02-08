
public class ShuffletheArray1470 {
	public static int[] shuffle(int[] nums, int n) {
		int[] result = new int[nums.length];
		for (int i = 0, j = 0; i < n; i++) {
			result[j++] = nums[i];
			result[j++] = nums[i + n];
		}
		return result;
	}

	public static void main(String[] args) {
		int[] arr = { 2, 5, 1, 3, 4, 7 };
		var result = shuffle(arr, 3);
		for (int i = 0; i < result.length; i++) {
			System.out.println(result[i]);
		}
	}
}
