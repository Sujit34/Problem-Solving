
public class SearchInsertPosition35 {
	public static int searchInsert(int[] nums, int target) {

		int low = 0;
		int high = nums.length - 1;
		int index = 0;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (nums[mid] == target) {
				index = mid;
				break;
			} else if (nums[mid] > target) {
				if(mid == 0 ||mid>0 && nums[mid-1]<target && target< nums[mid] ) {
					index = mid;
					break;
				}
				high = mid - 1;
			} else if (nums[mid] < target) {
				if(mid ==nums.length-1 ||( mid<nums.length-1 && nums[mid]<target && target< nums[mid+1] )) {
					index = mid+1;
					break;
				}
				low = mid+1;
			}
		}

		return index;
	}

	public static void main(String[] args) {
		int arr[] = { 1, 3, 5, 6 };
		System.out.println(searchInsert(arr, 7));

	}
}
