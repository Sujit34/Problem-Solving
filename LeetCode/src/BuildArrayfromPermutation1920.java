
public class BuildArrayfromPermutation1920 {
	public static int[] buildArray(int[] nums) {
		int[] result = new int[nums.length];
		for (int i = 0; i < nums.length; i++) {
			result[i] = nums[nums[i]];
		}
		return result;
	}

	public static void main(String[] args) {
		int[] arr = { 0, 2, 1, 5, 3, 4 };
		var result = buildArray(arr);
		for (int i = 0; i < result.length; i++) {
			System.out.println(result[i]);
		}
	}
}
