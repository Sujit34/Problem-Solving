
public class ExecutionofAllSuffixInstructionsStayinginaGrid2120 {
	public static int[] executeInstructions(int n, int[] startPos, String s) {

		int[] res = new int[s.length()];
		int index = 0;

		int pickX = n - 1;
		int pickY = n - 1;

		while (!s.isEmpty()) {
			int gridCount = 0;
			int currentX = startPos[1];
			int currentY = startPos[0];

			for (int i = 0; i < s.length(); i++) {

				if (s.charAt(i) == 'R') {
					currentX = currentX + 1;
					if (currentX > pickX) {
						res[index] = gridCount;
						index++;
						break;
					}
					gridCount++;
				}
				if (s.charAt(i) == 'L') {
					currentX = currentX - 1;
					if (currentX < 0) {
						res[index] = gridCount;
						index++;
						break;
					}
					gridCount++;
				}
				if (s.charAt(i) == 'U') {
					currentY = currentY - 1;
					if (currentY < 0) {
						res[index] = gridCount;
						index++;
						break;
					}
					gridCount++;
				}
				if (s.charAt(i) == 'D') {
					currentY = currentY + 1;
					if (currentY > pickY) {
						res[index] = gridCount;
						index++;
						break;
					}
					gridCount++;
				}

				if (i == s.length() - 1) {
					res[index] = gridCount;
					index++;
				}
			}

			s = s.substring(1);
		}

		return res;
	}

	public static void main(String[] args) {
		int[] arr = { 0, 0 };
		var result = executeInstructions(1, arr, "LRUD");
		for (int i = 0; i < result.length; i++) {
			System.out.println(result[i]);
		}

	}
}
