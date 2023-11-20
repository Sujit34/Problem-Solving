
public class MaximumPointsYouCanObtainfromCards1423 {
	public static void main(String[] args) {
		int[] arr = { 1,2,3,4,5};
		int k = 5;
		System.out.println(maxScore(arr, k));
	}

	public static int maxScore(int[] cardPoints, int k) {
		int sum = 0;
		int start = 0;
		int end = k;

		while (start < end) {
			sum = sum + cardPoints[start];
			start++;
		}

		int max = sum;

		start = start - 1;
		end = cardPoints.length - 1;

		while (start >= 0) {
			sum = sum - cardPoints[start] + cardPoints[end];
			start--;
			end--;
			max = Math.max(max, sum);
		}
		return max;
	}
}
