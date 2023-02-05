
public class FinalValueofVariableAfterPerformingOperations2011 {
	public static int finalValueAfterOperations(String[] operations) {
		int result = 0;
		for (int i = 0; i < operations.length; i++) {
			if (operations[i].equals("X++") || operations[i].equals("++X"))
				result = result + 1;
			else if (operations[i].equals("X--") || operations[i].equals("--X"))
				result = result - 1;
		}
		return result;
	}

	public static void main(String[] args) {
		String[] str = { "--X", "X++", "X++" };
		System.out.println(finalValueAfterOperations(str));
	}
}
