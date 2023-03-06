
public class FindtheMiddleIndexinArray1991 {
	public static int findMiddleIndex(int[] nums) {
		int result = -1;
		int totalSum = 0;
		for (int i = 0; i < nums.length; i++) {
			totalSum = totalSum + nums[i];
		}

		int leftSum = 0;
		for (int i = 0; i < nums.length; i++) {
			int rightSum = totalSum - leftSum - nums[i];
			if (leftSum == rightSum)
				return i;
			leftSum = leftSum + nums[i];
		}

		return result;
	}

	public static void main(String[] args) {
		int[] arr = { 2, 3, -1, 8, 4 }; // 3
		// int [] arr = {1,-1,4}; //2
		// int[] arr = {2,5}; //-1

		System.out.println(findMiddleIndex(arr));
	}
}
