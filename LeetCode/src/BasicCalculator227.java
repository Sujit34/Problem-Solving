import java.util.*;

public class BasicCalculator227 {
	public static int calculate(String s) {
		Stack<Integer> stack = new Stack<Integer>();
		int sum = 0;
		Character operation = '+';
		for (int i = 0; i < s.length(); i++) {
			int num = 0;
			if (Character.isDigit(s.charAt(i))) {
				while (i < s.length() && Character.isDigit(s.charAt(i))) {
					num = num * 10 + (s.charAt(i) - '0');
					i++;
				}
				i--;
				if (operation == '+') {
					stack.push(num);
				} else if (operation == '-') {
					stack.push(num * -1);
				} else if (operation == '*') {
					stack.push(stack.pop() * num);
				} else if (operation == '/') {
					stack.push(stack.pop() / num);
				}
			}

			if (s.charAt(i) == '+') {
				operation = '+';
			} else if (s.charAt(i) == '-') {
				operation = '-';
			} else if (s.charAt(i) == '*') {
				operation = '*';
			} else if (s.charAt(i) == '/') {
				operation = '/';
			}
		}
		while (!stack.isEmpty()) {
			sum = sum + stack.pop();
		}
		return sum;
	}

	public static void main(String[] args) {
		System.out.println(calculate("3+2*2"));
	}

}
