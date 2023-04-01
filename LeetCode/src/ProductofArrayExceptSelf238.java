
public class ProductofArrayExceptSelf238 {
	public static int[] productExceptSelf(int[] nums) {
		int[] result = new int[nums.length];
		int[] left = new int[nums.length];
		int[] right = new int[nums.length];

		left[0] = nums[0];
		for (int i = 1; i < nums.length; i++) {
			left[i] = left[i - 1] * nums[i];
		}

		right[nums.length - 1] = nums[nums.length - 1];
		for (int i = nums.length - 2; i >= 0; i--) {
			right[i] = right[i + 1] * nums[i];
		}
		
		
		for(int i=0;i<nums.length;i++) {
			if(i==0) result[i] = right[i+1];
			else if(i==nums.length-1) result[i]=left[i-1];
			else result[i] = left[i-1] * right[i+1];
			
		}

		return result;
	}

	public static void main(String[] args) {
		int[] arr = { -1,1,0,-3,3 };
		var res = productExceptSelf(arr);
		for (int i = 0; i < res.length; i++) {
			System.out.println(res[i]);
		}
	}

}
