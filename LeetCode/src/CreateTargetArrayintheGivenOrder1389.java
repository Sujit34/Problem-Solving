
public class CreateTargetArrayintheGivenOrder1389 {
	public static int[] createTargetArray(int[] nums, int[] index) {
		int[] result = new int[nums.length];

		for (int i = 0; i < index.length; i++) {
			
			for(int j=index.length-2;j>=index[i];j--) {
				result[j+1] = result[j]; 
			}
			
			result[index[i]] = nums[i];
		}

		return result;
	}

	public static void main(String[] args) {
		int[] arr1 = { 1 };
		int[] arr2 = { 0 };
		var result = createTargetArray(arr1, arr2);
		for (int i = 0; i < result.length; i++) {
			System.out.println(result[i]);
		}
	}

}
