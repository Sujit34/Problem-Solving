import java.util.Stack;
import java.util.stream.IntStream;

public class ValidParentheses20 {

	public static void main(String[] args) {
		System.out.println(isValid("()"));
	}

	public static boolean isValid(String s) {
		Stack<Character> stack = new Stack<Character>();

		char[] openBracket = new char[] { '(', '{', '[' };
		char[] closeBracket = { ')', '}', ']' };
		char[] charString = s.toCharArray();

		for (int i = 0; i < charString.length; i++) {
			char c = charString[i];		
			
			if (contains(c, openBracket)) {
				stack.push(c);
			}

			if (contains(c, closeBracket)) {
				if(stack.isEmpty()) return false;
				int closeBracketIndex = IntStream.range(0, closeBracket.length)
						.filter(x->closeBracket[x]==c).findFirst().orElse(-1);				
				
				int openBracketIndex = IntStream.range(0, openBracket.length)
						.filter(x->openBracket[x]==stack.peek()).findFirst().orElse(-1);
				
				if(openBracketIndex != closeBracketIndex) return false;
				stack.pop();
			}
		}

		return stack.isEmpty() ? true : false;

	}

	static boolean contains(char c, char[] array) {
		for (char x : array) {
			if (x == c) {
				return true;
			}
		}
		return false;
		/*
		int index = IntStream.range(0, array.length)
		.filter(x->array[x]==c).findFirst().orElse(-1);
		return index == -1 ?  false : true;
		*/
	}

}
