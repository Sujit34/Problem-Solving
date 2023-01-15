import java.util.*;

public class Pattern456 {
	public static boolean find132pattern(int[] nums) {

		Stack<Integer> stack = new Stack<Integer>();
		Stack<Integer> minStack = new Stack<Integer>();
		int curMin = nums[0];

		for (int i = 0; i < nums.length; i++) {
			while (!stack.isEmpty() && nums[i] >= stack.peek()) {
				stack.pop();
				minStack.pop();
			}
			if (!minStack.isEmpty() && nums[i] > minStack.peek())
				return true;

			stack.push(nums[i]);
			minStack.push(curMin);
			if (curMin > nums[i])
				curMin = nums[i];
		}
		return false;
	}

	public static void main(String[] args) {
		int arr[] = { 3, 1, 4, 2 };
		System.out.print(find132pattern(arr));

	}
}
