
public class absoluteValuesSumMinimization {
	int solution(int[] a) {
		if (a.length % 2 == 0) {
			return a[a.length / 2 - 1];
		} else {
			return a[a.length / 2];
		}
	}

}
