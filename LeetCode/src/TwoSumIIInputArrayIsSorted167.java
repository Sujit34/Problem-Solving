
public class TwoSumIIInputArrayIsSorted167 {
	public static int[] twoSum(int[] numbers, int target) {
		int[] arr = new int[2];
		/*
		for (int i = 0; i < numbers.length; i++) {
			int searchTargetIndex = -1;
			int searchTarget = target - numbers[i];
			if (numbers[i] == searchTarget)
				searchTargetIndex = binarySearch(numbers, i + 1, numbers.length - 1, searchTarget);
			else
				searchTargetIndex = binarySearch(numbers, 0, numbers.length - 1, searchTarget);

			if (searchTargetIndex != -1 && i != searchTargetIndex) {
				arr[0] = i + 1;
				arr[1] = searchTargetIndex + 1;
				break;
			}
		}
		*/
		
		int left = 0;
		int right = numbers.length -1;
		
		for(int i=0;i<numbers.length;i++) {
			if(numbers[left]+numbers[right]==target) {
				arr[0] = left + 1;
				arr[1] = right + 1;
			}
			else if(numbers[left]+numbers[right]<target)
				left++;
			else if(numbers[left]+numbers[right]>target)
				right--;
		}
		
		return arr;
	}
/*
	public static int binarySearch(int[] array, int low, int high, int search) {
		int index = -1;

		while (low <= high) {
			int mid = (low + high) / 2;
			if (array[mid] == search)
				return mid;
			if (array[mid] > search)
				high = mid - 1;
			if (array[mid] < search)
				low = mid + 1;
		}

		return index;
	}
*/
	public static void main(String[] args) {
		int[] arr = { 1, 2, 3, 4, 4, 9, 56, 90 };
		var result = twoSum(arr, 8);
		System.out.println(result[0]);
		System.out.println(result[1]);
	}

}
