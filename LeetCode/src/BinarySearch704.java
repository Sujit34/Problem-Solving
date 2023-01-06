
public class BinarySearch704 {
	public static int search(int[] nums, int target) {
		return recursiveBinarySearch(nums, 0, nums.length-1, target);
	}

	public static int recursiveBinarySearch(int array[], int low, int high, int searchValue) {

		int mid = (low + high) / 2;
		int index = -1;

		if (low > high)
			return index;

		if (array[mid] == searchValue)
			index = mid;
		else if (array[mid] > searchValue)
			return recursiveBinarySearch(array, low, mid - 1, searchValue);
		else if (array[mid] < searchValue)
			return recursiveBinarySearch(array, mid + 1, high, searchValue);
		;
		return index;
	}

	public static void main(String[] args) {
		int arr[] = { -1,0,3,5,9,12 };
		System.out.println(search(arr, 13));
	}

}
