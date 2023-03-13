public class WordSearch79 {
	public static boolean exist(char[][] board, String word) {
		boolean[][] visited = new boolean[board.length][board[0].length];
		for (int r = 0; r < board.length; r++) {
			for (int c = 0; c < board[0].length; c++) {
				if (dfs(board, word, visited, r, c, 0))
					return true;
			}
		}
		return false;
	}

	public static boolean dfs(char[][] board, String word, boolean visited[][], int r, int c, int i) {
		int rows = board.length;
		int columns = board[0].length;

		if (i == word.length())
			return true;
		if (r < 0 || c < 0 || r >= rows || c >= columns || word.charAt(i) != board[r][c] || visited[r][c] == true)
			return false;

		visited[r][c] = true;

		boolean res = (dfs(board, word, visited, r + 1, c, i + 1) || dfs(board, word, visited, r - 1, c, i + 1)
				|| dfs(board, word, visited, r, c + 1, i + 1) || dfs(board, word, visited, r, c - 1, i + 1));

		visited[r][c] = false;
		return res;
	}

	public static void main(String[] args) {
		char[][] arr = { { 'A', 'B', 'C', 'E' }, { 'S', 'F', 'C', 'S' }, { 'A', 'D', 'E', 'E' } };
		System.out.println(exist(arr, "ABCCED"));
		System.out.println(exist(arr, "SEE"));
		System.out.println(exist(arr, "ABCB"));
	}
}
