import java.util.*;

public class SimplifyPath71 {
	public static String simplifyPath(String path) {
		String result = "";
		String[] str = path.split("/");
		Stack<String> stack = new Stack<String>();
		for (String s : str) {
			if (s.equals("..") && !stack.isEmpty())
				stack.pop();
			if (!s.equals("") && !s.equals(".") && !s.equals(".."))
				stack.push(s);
		}
		if (stack.isEmpty())
			return "/";
		else {

			while (!stack.isEmpty()) {
				result = "/" + stack.pop() + result;
			}
			return result;
		}

	}

	public static void main(String[] args) {
		System.out.println(simplifyPath("/home//foo/")); // /home/foo
		System.out.println(simplifyPath("/a/./b/../../c/")); // /c
		System.out.println(simplifyPath("/../")); // /
		System.out.println(simplifyPath("/a/../../b/../c//.//")); // /c
		System.out.println(simplifyPath("/a//b////c/d//././/..")); // /a/b/c
	}
}
