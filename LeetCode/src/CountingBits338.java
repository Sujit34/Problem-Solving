public class CountingBits338 {
	public static int[] countBits(int n) {
		//bit Manipulation strategy o(nlogn) solution
		/*
		int arr[] = new int[n+1];
		int p=0;
		for(int j=0;j<=n;j++) {
			int countOfOne = 0;
			// Using get bit strategy 
			for(int i=0;i<32;i++) {
				int bitMask = 1<<i;
				if((bitMask & j) != 0)countOfOne++;
			}
			arr[p++] = countOfOne;			
		}
		
		return arr;
		*/
		
		//dp strategy o(n) solution
		int dp[] = new int[n+1];
		int offSet = 1;
		dp[0]=0;
		for(int i= 1;i<=n;i++) {
			if(offSet * 2 == i)offSet = i;
			dp[i] = 1 + dp[i-offSet];
		}
		return dp;
	}
	public static void main(String[] args) {
		 countBits(2);	
	}

}
