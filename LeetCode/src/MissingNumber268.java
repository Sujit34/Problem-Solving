import java.util.*;

public class MissingNumber268 {
	public static int missingNumber(int[] nums) {
		/*
		HashMap<Integer, Boolean> numbers = new HashMap<Integer, Boolean>();
		int missingNumber=0;
		for (int i = 0; i < nums.length; i++) {
			numbers.put(nums[i], true);			
		}
		for(int i=0;i<=nums.length;i++) {
			if(!numbers.containsKey(i)) {
				missingNumber = i;
				break;
			}
		}

		return missingNumber;
		*/
		
		/*
		int n = nums.length;
		int sum = (n*(n+1))/2;
		for(int i=0;i<n;i++) {
			sum = sum -nums[i];
		}
		return sum;
		*/
		
		//XOR approach. 5^5 = 0. So, all match value XOR will result 0. 
		//Only extra value will remain. ex : 5^5^3 = 3
		
		int sum=0;
		for(int i=0;i<nums.length;i++) {
			sum = (sum ^ nums[i]);
		}
		for(int i=0;i<=nums.length;i++) {
			sum = (sum ^ i);
		}
		return sum;
	}

	public static void main(String[] args) {
		int arr[] = { 3, 0, 1 };
		System.out.println(missingNumber(arr));
	}
}
