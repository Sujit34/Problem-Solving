import java.util.*;

public class stringsRearrangement {
	static boolean solution(String[] inputArray) {
		LinkedList<String> tries = loadStrings(inputArray);
		LinkedList<String> matches = new LinkedList<String>();
		matches.offer(tries.poll());

		int len = matches.getFirst().length();

		while (!tries.isEmpty()) {
			int numOfTries = tries.size();
			String first = matches.getFirst();
			String last = matches.getLast();

			for (int t = 0; t < numOfTries; t++) {
				String actual = tries.poll();
				if (exactOneDiff(first, actual, len)) {
					matches.offerFirst(actual);
					break;
				} else if (exactOneDiff(last, actual, len)) {
					matches.offerFirst(actual);
					break;
				} else {
					tries.offer(actual);
				}
			}
			if (numOfTries == tries.size())
				return false;
		}
		return true;
	}

	static boolean exactOneDiff(String target, String actual, int len) {
		int diff = 0;
		for (int ch = 0; ch < len; ch++) {
			if (target.charAt(ch) != actual.charAt(ch))
				diff++;
		}
		return diff == 1;
	}

	static LinkedList<String> loadStrings(String[] inputArray) {
		LinkedList<String> temp = new LinkedList<String>();
		for (String str : inputArray) {
			temp.offer((str));
		}
		return temp;
	}

	public static void main(String[] args) {
		String[] inputArray = { "ff", "gf", "af", "ar", "hf" };
		System.out.println(solution(inputArray));
	}
}
