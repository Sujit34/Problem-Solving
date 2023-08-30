import java.util.*;

public class PermutingTwoArrays {
	public static String twoArrays(int k, List<Integer> A, List<Integer> B) {

		Collections.sort(A);
		Collections.sort(B);
		Collections.reverse(B);

		for (int i = 0; i < A.size(); i++) {
			if (A.get(i) + B.get(i) < k)
				return "NO";
		}

		return "YES";
	}

	public static void main(String[] args) {
		List<Integer> A = new ArrayList<Integer>();
		List<Integer> B = new ArrayList<Integer>();

		A.add(2);
		A.add(1);
		A.add(3);

		B.add(7);
		B.add(8);
		B.add(9);

		System.out.println(twoArrays(10, A, B));
	}
}
