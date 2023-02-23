
public class ContainerWithMostWater11 {
	public static int maxArea(int[] height) {
		int result = 0;
		int left = 0;
		int right = height.length - 1;
		while (left < right) {
			if (result < (min(height[left], height[right]) * (right - left))) {
				result = (min(height[left], height[right]) * (right - left));
			}

			if (height[left] < height[right]) {
				left++;
			} else {
				right--;
			}
		}

		return result;
	}

	public static int min(int a, int b) {
		return a < b ? a : b;
	}

	public static void main(String[] args) {
		int[] arr = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
		System.out.println(maxArea(arr));
	}
}
