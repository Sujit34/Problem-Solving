
public class HowManyNumbersAreSmallerThantheCurrentNumber1365 {
	public static int[] smallerNumbersThanCurrent(int[] nums) {
		int[] arr = new int[101];
		for (int i = 0; i < nums.length; i++) {
			arr[nums[i]] += 1;
		}

		for (int i = 1; i < 101; i++) {
			arr[i] += arr[i - 1];
		}

		for (int i = 0; i < nums.length; i++) {
			int val = nums[i];
			nums[i] = val == 0 ? 0 : arr[val - 1];
		}

		return nums;
	}

	public static void main(String[] args) {
		int[] arr = { 8, 1, 2, 2, 3 };
		var arr1 = smallerNumbersThanCurrent(arr);
		for (int i = 0; i < arr1.length; i++)
			System.out.println(arr[i]);
	}
}
