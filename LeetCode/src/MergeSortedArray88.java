
public class MergeSortedArray88 {
	public static void merge(int[] nums1, int m, int[] nums2, int n) {

		for (int i = nums2.length - 1; i >= 0; i--) {
			while (m > 0 && nums1[m - 1] >= nums2[i]) {
				nums1[m + i] = nums1[m - 1];
				m--;
			}
			nums1[m + i] = nums2[i];

		}

		for (int i = 0; i < nums1.length; i++) {
			System.out.println(nums1[i]);
		}

	}

	public static void main(String[] args) {
		int[] nums1 = { 1, 2, 3, 0, 0, 0 };
		int[] nums2 = { 2, 5, 6 };
		merge(nums1, 3, nums2, 3);
	}
}
