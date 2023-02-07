
public class RunningSumof1dArray1480 {
	public static int[] runningSum(int[] nums) {
		int[] result = new int[nums.length];

		int sum = 0;
		for (int i = 0; i < nums.length; i++) {
			sum = sum + nums[i];
			result[i] = sum;
		}

		return result;
	}

	public static void main(String[] args) {
		int[] arr = { 1, 2, 3, 4 };
		var result = runningSum(arr);
		for (int i = 0; i < result.length; i++) {
			System.out.println(result[i]);
		}
	}
}
