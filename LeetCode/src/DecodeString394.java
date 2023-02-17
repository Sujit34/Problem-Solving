import java.util.*;

public class DecodeString394 {
	public static String decodeString(String s) {
		Stack<Integer> number = new Stack<Integer>();
		Stack<String> str = new Stack<String>();

		int digit = 0;
		String st = "";
		String result = "";
		for (int i = 0; i <= s.length() - 1; i++) {
			if ((int) (s.charAt(i)) >= 48 && (int) (s.charAt(i)) <= 57) {
				digit = digit * 10 + s.charAt(i) - '0';
			}

			else if (s.charAt(i) >= 'a' && s.charAt(i) <= 'z') {
				st = st + s.charAt(i);
			} else if (s.charAt(i) == '[') {
				number.push(digit);
				str.push(st);
				digit = 0;
				st = "";
			}

			else {
				String topString = str.peek();
				int num = number.peek();
				for (int k = 1; k <= num; k++) {
					topString = topString + st;
				}
				str.pop();
				number.pop();
				st = topString;
			}
		}
		result = st;
		return result;
	}

	public static void main(String[] args) {
		System.out.println(decodeString("3[a]2[bc]"));
		System.out.println(decodeString("3[a2[c]]"));
		System.out.println(decodeString("2[abc]3[cd]ef"));
		System.out.println(decodeString("abc3[cd]xyz"));
		System.out.println(decodeString("3[abc]cd2[xyz]"));
		System.out.println(decodeString("3[z]2[2[y]pq4[2[jk]e1[f]]]ef"));

	}
}
