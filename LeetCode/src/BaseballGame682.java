import java.util.*;

public class BaseballGame682 {
	public static int calPoints(String[] operations) {
		Stack<Integer> stack = new Stack<Integer>();

		for (int i = 0; i < operations.length; i++) {
			if (operations[i].equals("C")) {
				stack.pop();
			} else if (operations[i].equals("D")) {
				stack.push(2 * stack.peek());
			} else if (operations[i].equals("+")) {
				int last = stack.peek();
				stack.pop();
				int secondlast = stack.peek();
				stack.push(last);
				stack.push(last + secondlast);

			} else {
				int value = Integer.parseInt(operations[i]);
				stack.push(value);
			}
		}
		int sum = 0;
		while (!stack.isEmpty()) {
			sum = sum + stack.pop();
		}
		return sum;
	}

	public static void main(String[] args) {
		// String[] str = { "5", "2", "C", "D", "+" };
		// String[] str = {"5","-2","4","C","D","9","+","+"};
		String[] str = { "1", "C" };
		System.out.println(calPoints(str));
	}
}
