
public class ElectionsWinners {
	int solution(int[] votes, int k) {
		int max = Integer.MIN_VALUE;
		for (int i = 0; i < votes.length; i++) {
			if (votes[i] > max)
				max = votes[i];
		}
		int count = 0;
		for (int i = 0; i < votes.length; i++) {
			if (votes[i] + k > max) {
				count++;
			}
		}
		if (count == 0) {
			int maxCount = 0;
			for (int i = 0; i < votes.length; i++) {
				if (max == votes[i])
					maxCount++;
			}
			return maxCount == 1 ? 1 : 0;
		}
		return count;
	}

}
