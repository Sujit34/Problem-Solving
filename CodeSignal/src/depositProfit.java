
public class depositProfit {
	int solution(int deposit, int rate, int threshold) {
		double totalDeposit = deposit;
		int count = 0;
		while (totalDeposit < threshold) {
			totalDeposit = totalDeposit + (totalDeposit * rate) / 100;
			count++;
		}
		return count;
	}
}
