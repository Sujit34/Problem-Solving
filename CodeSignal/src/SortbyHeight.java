
public class SortbyHeight {
	int[] solution(int[] a) {

		for (int i = 0; i < a.length; i++) {
			if (a[i] != -1) {
				for (int j = i; j < a.length; j++) {
					if (a[i] > a[j] && a[j] != -1) {
						int temp = a[j];
						a[j] = a[i];
						a[i] = temp;
					}
				}
			}
		}
		return a;
	}
}
