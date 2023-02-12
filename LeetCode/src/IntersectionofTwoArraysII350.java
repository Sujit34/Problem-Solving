import java.util.*;

public class IntersectionofTwoArraysII350 {
	public static int[] intersection(int[] nums1, int[] nums2) {

		List<Integer> list = new ArrayList<Integer>();
		int[] arr1 = new int[nums1.length > nums2.length ? nums1.length : nums2.length];
		int[] arr2 = new int[nums1.length > nums2.length ? nums2.length : nums1.length];

		if (nums1.length > nums2.length) {
			arr1 = nums1;
			arr2 = nums2;
		} else {
			arr1 = nums2;
			arr2 = nums1;
		}

		mergeSort(arr1, 0, arr1.length - 1);

		for (int i = 0; i < arr2.length; i++) {
			mergeSort(arr1, 0, arr1.length - 1);
			int index = binarySearch(arr1, arr2[i]);
			if (index != -1) {

				arr1[index] = -1;
				list.add(arr2[i]);
			}

		}
		int[] result = new int[list.size()];

		int p = 0;
		for (int i = 0; i < list.size(); i++) {
			result[p++] = list.get(i);
		}

		return result;
	}

	public static int binarySearch(int[] array, int searchValue) {
		int index = -1;
		int low = 0;
		int high = array.length - 1;

		while (low <= high) {
			int mid = (low + high) / 2;
			if (array[mid] == searchValue)
				return mid;
			else if (array[mid] > searchValue)
				high = mid - 1;
			else if (array[mid] < searchValue)
				low = mid + 1;
		}
		return index;
	}

	public static void mergeSort(int arr1[], int l, int r) {
		if (l < r) {

			int m = (l + r) / 2;

			mergeSort(arr1, l, m);
			mergeSort(arr1, m + 1, r);

			merge(arr1, l, m, r);
		}
	}

	public static void merge(int arr1[], int l, int m, int r) {

		int n1 = m - l + 1;
		int n2 = r - m;

		int L[] = new int[n1];
		int R[] = new int[n2];

		for (int i = 0; i < n1; ++i)
			L[i] = arr1[l + i];
		for (int j = 0; j < n2; ++j)
			R[j] = arr1[m + 1 + j];

		int i = 0, j = 0;

		int k = l;
		while (i < n1 && j < n2) {
			if (L[i] <= R[j]) {
				arr1[k] = L[i];
				i++;
			} else {
				arr1[k] = R[j];
				j++;
			}
			k++;
		}

		while (i < n1) {
			arr1[k] = L[i];
			i++;
			k++;
		}

		while (j < n2) {
			arr1[k] = R[j];
			j++;
			k++;
		}
	}

	public static void main(String[] args) {
		int[] nums1 = { 1, 2, 2, 1 };
		int[] nums2 = { 1, 1 };
		var result = intersection(nums1, nums2);
		for (int i = 0; i < result.length; i++) {
			System.out.println(result[i]);
		}

	}
}
