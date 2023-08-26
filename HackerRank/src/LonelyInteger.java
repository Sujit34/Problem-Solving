import java.util.*;

public class LonelyInteger {
	public static int lonelyinteger(List<Integer> a) {
		// Write your code here
		int[] arr = new int[101];
		int res = 0;
		for (int i = 0; i < a.size(); i++) {
			arr[a.get(i)]++;
		}
		for (int i = 0; i <= 100; i++) {
			if (arr[i] == 1)
				res = i;
		}

		return res;
	}

	public static void main(String[] args) {
		List<Integer> list = new ArrayList<Integer>();
		list.add(1);
		list.add(1);
		list.add(2);
		list.add(2);
		list.add(3);
		list.add(3);
		list.add(4);
		list.add(5);
		list.add(5);
		System.out.println(lonelyinteger(list));

	}
}
