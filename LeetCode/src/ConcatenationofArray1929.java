
public class ConcatenationofArray1929 {
	public static int[] getConcatenation(int[] nums) {
		int[] result = new int[nums.length * 2];
		for (int i = 0; i < nums.length; i++) {
			result[i] = nums[i];
			result[i + nums.length] = nums[i];
		}
		return result;
	}

	public static void main(String[] args) {
		int[] arr = { 1, 2, 1 };
		var result = getConcatenation(arr);
		for (int i = 0; i < result.length; i++) {
			System.out.println(result[i]);
		}
	}
}
