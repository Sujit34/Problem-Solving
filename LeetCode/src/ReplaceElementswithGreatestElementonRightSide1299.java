
public class ReplaceElementswithGreatestElementonRightSide1299 {
	public static int[] replaceElements(int[] arr) {
		int[] result = new int[arr.length];
		for (int i = 0; i < arr.length - 1; i++) {
			int max = arr[i + 1];
			int index = arr.length - 1;
			for (int j = i + 1; j < arr.length; j++) {
				if (max <= arr[j]) {
					max = arr[j];
					index = j;
				}
			}
			int temp = index;
			while (i < index) {
				result[index - 1] = max;
				index = index - 1;
			}
			i = temp - 1;
		}

		result[arr.length - 1] = -1;
		return result;
	}

	public static void main(String[] args) {
		int[] arr = { 17, 18, 5, 4, 6, 1 };
		var result = replaceElements(arr);
		for (int i = 0; i < result.length; i++) {
			System.out.println(result[i]);
		}
	}
}
