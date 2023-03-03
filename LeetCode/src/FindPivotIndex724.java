
public class FindPivotIndex724 {
	public static int pivotIndex(int[] nums) {
		int totalSum = 0;
		for (int i = 0; i < nums.length; i++) {
			totalSum = totalSum + nums[i];
		}
		int subSum = 0;
		for (int i = 0; i < nums.length; i++) {

			if (subSum == (totalSum - subSum) - nums[i])
				return i;
			subSum = subSum + nums[i];
		}
		return -1;
	}

	public static void main(String[] args) {
		int[] arr = { 1, 2, 3 };
		System.out.println(pivotIndex(arr));

	}
}
