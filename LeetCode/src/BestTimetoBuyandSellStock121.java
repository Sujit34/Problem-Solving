public class BestTimetoBuyandSellStock121 {
	public static int maxProfit(int[] prices) {
		int maxProfit = 0;
		int buying = 0;
		for (int selling = 1; selling < prices.length; selling++) {
			if ((prices[buying] < prices[selling])) {
				int profit = prices[selling] - prices[buying];
				if (profit > maxProfit)
					maxProfit = profit;
			} else
				buying = selling;
		}
		return maxProfit;
	}

	public static void main(String[] args) {
		int prices[] = { 1, 2, 4, 2, 5, 7, 2, 4, 9, 0, 9 };
		System.out.println(maxProfit(prices));
	}
}
