
public class FindMinimuminRotatedSortedArray153 {
	public static int findMin(int[] nums) {
		int pivotIndex = findPivot(nums, 0, nums.length - 1);
		if (pivotIndex == -1||nums.length==1)
			return nums[0];	
		if(pivotIndex==nums.length-1)return nums[0];
		return nums[pivotIndex+1];
	}
	public static int findPivot(int arr[], int low, int high) {

		int mid = (low + high) / 2;

		if (high < low)
			return -1; 
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
	public static void main(String args[]) {
		int arr[] = {11,13,15,17};		
		System.out.println("Index of the element is : " + findMin(arr));
	}
}
