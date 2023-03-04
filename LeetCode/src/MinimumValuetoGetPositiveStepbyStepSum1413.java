
public class MinimumValuetoGetPositiveStepbyStepSum1413 {
	public static int minStartValue(int[] nums) {
		/*
		int result = 0;
		boolean resultNotFound = true;
		int i = 1;
		while (resultNotFound) {
			int sum = i;
			for (int j = 0; j < nums.length; j++) {
				sum = sum + nums[j];
				if (sum <= 0)
					break;
				if (sum > 0 && j == nums.length - 1)
					return i;
			}
			i++;
		}
		return result;
		*/
		//Prefix Sum
		int min = 0;
		int sum = 0;
		
		for(int i=0;i<nums.length;i++) {
			sum =sum +nums[i];
			if(min>sum) min=sum;
		}
		return min<0? min*(-1) + 1 : 1; 
		
	}

	public static void main(String[] args) {
		int[] arr = { 1,2 };
		System.out.println(minStartValue(arr));
	}
}
