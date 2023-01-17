import java.util.*;

public class RemoveAllAdjacentDuplicatesinStringII1209 {
	public static String removeDuplicates(String s, int k) {
		Stack<Character> stack = new Stack<Character>();
		Stack<Integer> count = new Stack<Integer>();

		for (int i = 0; i < s.length(); i++) {
			if (!stack.isEmpty() && stack.peek() == s.charAt(i))
				count.push(count.peek() + 1);
			else
				count.push(1);
			stack.push(s.charAt(i));
			if (count.peek() == k) {
				for (int j = 1; j <= k; j++) {
					stack.pop();
					count.pop();
				}
			}
		}
		String result = "";
		while (!stack.isEmpty()) {
			result = stack.pop() + result;
		}
		return result;
	}

	public static void main(String[] args) {
		System.out.println(removeDuplicates("pbbcggttciiippooaais", 2));
		System.out.println(removeDuplicates("deeedbbcccbdaa", 3));
		System.out.println(removeDuplicates("abcd", 2));
	}
}
