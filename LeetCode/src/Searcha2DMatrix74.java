
public class Searcha2DMatrix74 {
	public static boolean searchMatrix(int[][] matrix, int target) {
		if (matrix[0][0] > target || matrix[matrix.length - 1][matrix[0].length - 1] < target)
			return false;
		int row = getRowforBS(matrix, target);
		return binarySearch(matrix, target, row);
	}

	public static int getRowforBS(int[][] matrix, int target) {
		int low = 0;
		int high = matrix.length - 1;
		/* if only 2 row then this checking is necessary */
		if (low == 0 && high == 1) {
			if (matrix[low][0] <= target && matrix[low][matrix[0].length - 1] >= target)
				return low;
			if (matrix[high][0] <= target && matrix[high][matrix[1].length - 1] >= target)
				return high;
		}
		while (low <= high) {
			int mid = (low + high) / 2;
			if (mid == 0 || mid == matrix.length - 1 || matrix[mid][0] == target)
				return mid;
			if (matrix[mid - 1][0] < target && matrix[mid][0] > target)
				return mid - 1;
			if (matrix[mid][0] < target && matrix[mid + 1][0] > target)
				return mid;
			if (matrix[mid][0] < target)
				low = mid + 1;
			if (matrix[mid][0] > target)
				high = mid - 1;
		}

		return -1;
	}

	public static boolean binarySearch(int[][] matrix, int target, int row) {
		int low = 0;
		int high = matrix[row].length - 1;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (matrix[row][mid] == target)
				return true;
			if (matrix[row][mid] < target)
				low = mid + 1;
			if (matrix[row][mid] > target)
				high = mid - 1;
		}
		return false;
	}

	public static void main(String[] args) {
		int arr[][] = { { 1, 3, 5, 7 }, { 10, 11, 16, 20 }, { 23, 30, 34, 60 } };
		System.out.println(searchMatrix(arr, -3));
		System.out.println(searchMatrix(arr, 3));
		System.out.println(searchMatrix(arr, 16));
		System.out.println(searchMatrix(arr, 34));
		System.out.println(searchMatrix(arr, 60));
		System.out.println(searchMatrix(arr, 69));

		int arr1[][] = { { 1 }, { 3 } };
		System.out.println(searchMatrix(arr1, 1));

	}
}
