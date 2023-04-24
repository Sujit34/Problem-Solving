import java.util.Arrays;

public class RotateArray189 {
	public static void rotate(int[] nums, int k) {
		k = k % nums.length;
		int low;
		int high;
		
		// reverse
		low = 0;
		high = nums.length-1;
		while(low<high) {
			int temp = nums[high];
			nums[high] = nums[low];
			nums[low] = temp;
			low++;
			high--;
		}
		
		// reverse last k
		
		low = 0;
		high = k-1;
		while(low<high) {
			int temp = nums[high];
			nums[high] = nums[low];
			nums[low] = temp;
			low++;
			high--;
		}
		// reverse rest
		low = k;
		high = nums.length-1;
		while(low<high) {
			int temp = nums[high];
			nums[high] = nums[low];
			nums[low] = temp;
			low++;
			high--;
		}
		
		
		for (int j = 0; j < nums.length; j++) {
			System.out.print(nums[j] + " ");
		}
		System.out.println();
	}

	public static void main(String[] args) {
		rotate(new int[] { 1, 2, 3, 4, 5, 6, 7 }, 3);
		rotate(new int[] { -1, -100, 3, 99 }, 2);
	}
}
