
public class LeftandRightSumDifferences2574 {
	public static int[] leftRigthDifference(int[] nums) {
		int[] answer = new int[nums.length];
		int[] leftSum = new int[nums.length];
		int[] rightSum = new int[nums.length];
		
		int len= nums.length-1;
		for (int i = 0; i <=len; i++) {
			if (i == 0) {
				leftSum[i] = 0;
				rightSum[len]=0;
			}
				
			else {
				leftSum[i] = leftSum[i - 1] + nums[i - 1];
				rightSum[len-i] = rightSum[(len-i)+1] + nums[(len-i)+1]; 
			}						
		}
		for(int i=0;i<nums.length;i++) {
			answer[i] = Math.abs(leftSum[i]-rightSum[i]);
		}

		return answer;
	}

	public static void main(String[] args) {
		int[] arr = { 1 };
		var result = leftRigthDifference(arr);
		for (int i = 0; i < result.length; i++) {
			System.out.println(result[i]);
		}
	}
}
