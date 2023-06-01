
public class Minesweeper {
	static int[][] solution(boolean[][] matrix) {
		int[][] res = new int[matrix.length][matrix[0].length];
		for (int i = 0; i < matrix.length; i++) {
			for (int j = 0; j < matrix[0].length; j++) {
				int count = 0;

				if (i - 1 >= 0 && j - 1 >= 0 && matrix[i - 1][j - 1] == true)
					count++;
				if (i - 1 >= 0 && matrix[i - 1][j] == true)
					count++;
				if (i - 1 >= 0 && j + 1 < matrix[0].length && matrix[i - 1][j + 1] == true)
					count++;
				if (j - 1 >= 0 && matrix[i][j - 1] == true)
					count++;
				if (j + 1 < matrix[0].length && matrix[i][j + 1] == true)
					count++;
				if (i + 1 < matrix.length && j - 1 >= 0 && matrix[i + 1][j - 1] == true)
					count++;
				if (i + 1 < matrix.length && matrix[i + 1][j] == true)
					count++;
				if (i + 1 < matrix.length && j + 1 < matrix[0].length && matrix[i + 1][j + 1] == true)
					count++;

				res[i][j] = count;
			}
		}

		return res;
	}

	public static void main(String[] args) {
		boolean[][] matrix = { { true, false, false }, { false, true, false }, { false, false, false } };
		System.out.println(solution(matrix));
	}

}
