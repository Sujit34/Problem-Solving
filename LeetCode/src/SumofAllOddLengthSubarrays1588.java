
public class SumofAllOddLengthSubarrays1588 {
	public static int sumOddLengthSubarrays(int[] arr) {
		int result = 0;
		
		for(int i=0;i<arr.length;i++) {
			for(int j=i+1;j<=arr.length;j=j+2) {
				for(int k=i;k<j;k++) {
					result = result +arr[k];
				}
			}
		}
		return result;
	}

	public static void main(String[] args) {
		int[] arr = { 1, 4, 2, 5, 3 };
		System.out.println(sumOddLengthSubarrays(arr));
	}
}
