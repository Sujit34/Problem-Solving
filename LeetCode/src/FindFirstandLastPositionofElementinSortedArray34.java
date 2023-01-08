
public class FindFirstandLastPositionofElementinSortedArray34 {
	public static int[] searchRange(int[] nums, int target) {
		int result[] = new int[2];

		int low = 0;
		int high = nums.length - 1;
		int index = -1;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (nums[mid] == target) {
				index = mid;
				break;
			} else if (nums[mid] > target)
				high = mid - 1;
			else if (nums[mid] < target)
				low = mid + 1;
		}

		if (index == -1) {
			result[0] = -1;
			result[1] = -1;
		} else {
			//Left
			int i = index;
			while (i >= 0 && nums[i] == target) {
				result[0] = i;
				i--;
			}
			
			//Right
			i = index;
			while (i < nums.length && nums[i] == target) {
				result[1] = i;
				i++;
			}

		}

		return result;
	}

	public static void main(String[] args) {
		int arr[] = { 5, 7, 7, 8, 8, 10 };
		var res = searchRange(arr, 8);
		for (int i = 0; i < res.length; i++) {
			System.out.println(res[i]);
		}

	}
}
