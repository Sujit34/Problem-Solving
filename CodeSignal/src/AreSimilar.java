
import java.util.*;

public class AreSimilar {
	boolean solution(int[] a, int[] b) {
		int count = 0;
		for (int i = 0; i < a.length; i++) {
			if (a[i] != b[i])
				count++;
		}
		Arrays.sort(a);
		Arrays.sort(b);

		return Arrays.equals(a, b) ? count <= 2 ? true : false : false;
	}
}
