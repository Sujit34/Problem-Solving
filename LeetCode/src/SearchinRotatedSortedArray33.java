
public class SearchinRotatedSortedArray33 {
	public static int search(int[] nums, int target) {
		int pivotIndex = findPivot(nums, 0, nums.length - 1);
		if (pivotIndex == -1)
			return binarySearch(nums, 0, nums.length - 1, target);
		if (nums[pivotIndex] == target)
			return pivotIndex;

		if (nums[0] <= target)
			return binarySearch(nums, 0, pivotIndex - 1, target);
		return binarySearch(nums, pivotIndex + 1, nums.length - 1, target);
	}

	public static int findPivot(int arr[], int low, int high) {

		int mid = (low + high) / 2;

		if (high < low)
			return -1; // array is not rotated.
		if (high == low)
			return low;
		if (mid < high && arr[mid] > arr[mid + 1])
			return mid;
		if (mid > low && arr[mid] < arr[mid - 1])
			return mid - 1;
		if (arr[low] >= arr[mid])
			return findPivot(arr, low, mid - 1);
		return findPivot(arr, mid + 1, high);
	}

	public static int binarySearch(int array[], int low, int high, int target) {

		int mid = (low + high) / 2;
		int index = -1;

		if (low > high)
			return index;

		if (array[mid] == target)
			return mid;
		else if (array[mid] > target)
			return binarySearch(array, low, mid - 1, target);
		else if (array[mid] < target)
			return binarySearch(array, mid + 1, high, target);
		return index;
	}

	public static void main(String args[]) {
		int arr[] = { 1, 3 };// { 4, 5, 6, 7, 0, 1, 2 };
		int target = 0;
		System.out.println("Index of the element is : " + search(arr, target));
	}
}
