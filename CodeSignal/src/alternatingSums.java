
public class alternatingSums {
	int[] solution(int[] a) {
		int team1 = 0;
		int team2 = 0;
		for (int i = 0; i < a.length; i = i + 2) {
			team1 += a[i];
			if (i < a.length - 1)
				team2 += a[i + 1];
		}

		return new int[] { team1, team2 };
	}
}
