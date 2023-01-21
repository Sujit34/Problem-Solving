import java.util.*;

public class EvaluateReversePolishNotatio150 {
	public static int evalRPN(String[] tokens) {
		Stack<Integer> stack = new Stack<Integer>();
		for (int i = 0; i < tokens.length; i++) {
			if (tokens[i].equals("+")) {
				int last = stack.peek();
				stack.pop();
				int secondLast = stack.peek();
				stack.pop();
				stack.push(last+secondLast);

			} else if (tokens[i].equals("-")) {
				int last = stack.peek();
				stack.pop();
				int secondLast = stack.peek();
				stack.pop();
				stack.push(secondLast-last);

			} else if (tokens[i].equals("*")) {
				int last = stack.peek();
				stack.pop();
				int secondLast = stack.peek();
				stack.pop();
				stack.push(last*secondLast);

			} else if (tokens[i].equals("/")) {
				int last = stack.peek();
				stack.pop();
				int secondLast = stack.peek();
				stack.pop();
				stack.push(secondLast/last);

			}
			else
			{
				stack.push(Integer.parseInt(tokens[i]));
			}
		}

		return stack.pop();
	}

	public static void main(String[] args) {
		String[] tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
		System.out.println(evalRPN(tokens));
	}
}
