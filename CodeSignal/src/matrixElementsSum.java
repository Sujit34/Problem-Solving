
public class matrixElementsSum {
	public static int solution(int[][] matrix) {
		int sum = 0;
		for (int i = 0; i < matrix.length; i++) {
			for (int j = 0; j < matrix[i].length; j++) {
				int p = i;
				while (p != 0) {
					p--;
					if (matrix[p][j] == 0) {
						matrix[i][j] = 0;
					}
				}
				sum = sum + matrix[i][j];
			}
		}
		return sum;
	}

	public static void main(String[] args) {

		int[][] arr = { { 1, 1, 1, 0 }, { 0, 5, 0, 1 }, { 2, 1, 3, 10 } };
		System.out.println(solution(arr));
	}
}
