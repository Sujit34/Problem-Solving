import java.util.*;

public class CountingSort1 {
	public static List<Integer> countingSort(List<Integer> arr) {
		int[] a = new int[100];
		for (int i = 0; i < arr.size(); i++) {
			a[arr.get(i)]++;
		}
		List<Integer> res = new ArrayList<Integer>();
		for (int i = 0; i < 100; i++) {
			res.add(a[i]);

		}

		return res;
	}

	public static void main(String[] args) {
		List<Integer> list = new ArrayList<Integer>();
		list.add(1);
		list.add(1);
		list.add(2);
		list.add(3);
		list.add(3);
		var l = countingSort(list);
		for (int i = 0; i < l.size(); i++) {
			System.out.println(l.get(i));
		}

	}
}
