import java.util.*;

public class NextGreaterElementI496 {
	public static int[] nextGreaterElement(int[] nums1, int[] nums2) {
		int result[] = new int[nums1.length];
		 Arrays.fill(result, -1);

		HashMap<Integer, Integer> nums1HashMap = new HashMap<Integer, Integer>();
		for (int i = 0; i < nums1.length; i++) {
			nums1HashMap.put(nums1[i], i);
		}
		
		Stack<Integer> stack = new Stack<Integer>();
		for(int i=0;i<nums2.length;i++) {
			while(!stack.isEmpty() && stack.peek()<nums2[i]) {
				int index = nums1HashMap.get(stack.peek());
				result[index] = nums2[i];
				stack.pop();
			}
			if(nums1HashMap.containsKey(nums2[i])) {
				stack.push(nums2[i]);
			}
		}

		return result;
	}

	public static void main(String[] args) {
		int nums1[] = {2,4};
		int nums2[] = {1,2,3,4};

		var res = nextGreaterElement(nums1, nums2);
		for (int i = 0; i < res.length; i++) {
			System.out.println(res[i]);
		}
	}
}
