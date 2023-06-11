
public class BestTimetoBuyandSellStockII {
	public static int maxProfit(int[] prices) {
		int res = 0;
		int left = 0;
		int right = 1;
		for (int i = 1; i < prices.length; i++) {
			right = i;
			if (prices[right] > prices[left] && prices.length - 1 == right) {
				res = res + prices[right] - prices[left];
			} else if (prices[right] > prices[left] && prices[right + 1] < prices[right]) {
				res = res + prices[right] - prices[left];
				left = right + 1;
				right = left + 1;
			} else if (prices[right] <= prices[left]) {
				left = right;
			}

		}
		return res;
	}

	public static void main(String[] args) {
		int[] arr = { 1, 2, 3, 4, 5 };
		System.out.println(maxProfit(arr));
	}
}
