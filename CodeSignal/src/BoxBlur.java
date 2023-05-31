
public class BoxBlur {
	int[][] solution(int[][] image) {

		int[][] arr = new int[image.length - 2][image[0].length - 2];

		for (int i = 0; i < image.length - 2; i++) {
			for (int j = 0; j < image[0].length - 2; j++) {
				int sum = image[i][j] + image[i][j + 1] + image[i][j + 2] + image[i + 1][j] + image[i + 1][j + 1]
						+ image[i + 1][j + 2] + image[i + 2][j] + image[i + 2][j + 1] + image[i + 2][j + 2];
				arr[i][j] = (int) sum / 9;
			}
		}

		return arr;
	}

}
