import java.util.*;

public class FindKClosestElements658 {
	public static List<Integer> findClosestElements(int[] arr, int k, int x) {
		List<Integer> res = new ArrayList<Integer>();

		int low = 0;
		int high = arr.length - 1;
		while (high - low >= k) {
			if (Math.abs(arr[low] - x) > Math.abs(arr[high] - x)) {
				low++;
			} else {
				high--;
			}
		}
		for(int i=low;i<=high;i++) {
			res.add(arr[i]);
		}

		return res;
	}

	public static void main(String[] args) {
		int array[] = { 1, 2, 3, 4, 5 };

		var result = findClosestElements(array, 4, 3);
		for (int i = 0; i < result.size(); i++) {
			System.out.print(result.get(i) + " ");
		}
		

	}
}
