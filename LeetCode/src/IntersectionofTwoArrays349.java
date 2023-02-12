import java.util.*;

public class IntersectionofTwoArrays349 {
	public static int[] intersection(int[] nums1, int[] nums2) {

		HashMap<Integer, Boolean> hashMap = new HashMap<Integer, Boolean>();

		mergeSort(nums1, 0, nums1.length - 1);

		for (int i = 0; i < nums2.length; i++) {
			if (!hashMap.containsKey(nums2[i])) {
				if (binarySearch(nums1, nums2[i])) {
					hashMap.put(nums2[i], true);
				}
			}
		}
		int[] result = new int[hashMap.size()];

		int p = 0;
		// Iterator
		Iterator<Map.Entry<Integer, Boolean>> new_Iterator = hashMap.entrySet().iterator();

		// Iterating every set of entry in the HashMap
		while (new_Iterator.hasNext()) {
			Map.Entry<Integer, Boolean> new_Map = (Map.Entry<Integer, Boolean>) new_Iterator.next();

			result[p++] = new_Map.getKey();
		}

		return result;
	}

	public static Boolean binarySearch(int[] array, int searchValue) {
		int index = -1;
		int low = 0;
		int high = array.length - 1;

		while (low <= high) {
			int mid = (low + high) / 2;
			if (array[mid] == searchValue)
				return true;
			else if (array[mid] > searchValue)
				high = mid - 1;
			else if (array[mid] < searchValue)
				low = mid + 1;
		}
		return index == -1 ? false : true;
	}

	public static void mergeSort(int nums1[], int l, int r) {
		if (l < r) {

			int m = (l + r) / 2;

			mergeSort(nums1, l, m);
			mergeSort(nums1, m + 1, r);

			merge(nums1, l, m, r);
		}
	}

	public static void merge(int nums1[], int l, int m, int r) {

		int n1 = m - l + 1;
		int n2 = r - m;

		int L[] = new int[n1];
		int R[] = new int[n2];

		for (int i = 0; i < n1; ++i)
			L[i] = nums1[l + i];
		for (int j = 0; j < n2; ++j)
			R[j] = nums1[m + 1 + j];

		int i = 0, j = 0;

		int k = l;
		while (i < n1 && j < n2) {
			if (L[i] <= R[j]) {
				nums1[k] = L[i];
				i++;
			} else {
				nums1[k] = R[j];
				j++;
			}
			k++;
		}

		while (i < n1) {
			nums1[k] = L[i];
			i++;
			k++;
		}

		while (j < n2) {
			nums1[k] = R[j];
			j++;
			k++;
		}
	}

	public static void main(String[] args) {
		int[] nums1 = { 4, 9, 5 };
		int[] nums2 = { 9, 4, 9, 8, 4 };
		var result = intersection(nums1, nums2);
		for (int i = 0; i < result.length; i++) {
			System.out.println(result[i]);
		}

	}
}