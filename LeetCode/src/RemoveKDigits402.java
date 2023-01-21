import java.util.*;

public class RemoveKDigits402 {
	public static String removeKdigits(String num, int k) {

		Stack<Character> stack = new Stack<Character>();

		for (int i = 0; i < num.length(); i++) {
			while (k > 0 && !stack.isEmpty() && stack.peek() > (int) (num.charAt(i))) {
				stack.pop();
				k--;
			}
			stack.push(num.charAt(i));
		}
		while (k > 0 && !stack.isEmpty()) {
			stack.pop();
			k--;
		}
		String s = "";
		while (!stack.isEmpty()) {
			s = stack.pop() + s;
		}

		while (s.length() > 0 && s.charAt(0) == '0') {
			s = s.substring(1);
		}

		return s == "" ? "0" : s;
	}

	public static void main(String[] args) {
		System.out.println(removeKdigits("1432219", 3));
		System.out.println(removeKdigits("10200", 1));
		System.out.println(removeKdigits("10", 2));
		System.out.println(removeKdigits("112", 1));
		System.out.println(removeKdigits("1234567890", 9));

	}
}
