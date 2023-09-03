import java.util.*;

public class SalesbyMatch {
	public static int sockMerchant(int n, List<Integer> ar) {
		int count = 0;
		int[] arr = new int[101];

		for (int i = 0; i < ar.size(); i++) {
			arr[ar.get(i)]++;
		}

		for (int i = 0; i < 101; i++) {
			count = count + (arr[i] / 2);
		}

		return count;
	}

	public static void main(String[] args) {
		List<Integer> list = new ArrayList<Integer>();
		list.add(1);
		list.add(2);
		list.add(1);
		list.add(2);
		list.add(1);
		list.add(3);
		list.add(2);

		System.out.println(sockMerchant(7, list));

	}
}
