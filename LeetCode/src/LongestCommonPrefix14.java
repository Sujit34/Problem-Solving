
public class LongestCommonPrefix14 {
	public static String longestCommonPrefix(String[] strs) {
		String result = "";

		for (int i = 0; i <= 200; i++) {
			if (strs[0].length() == i)
				return result;
			char c = strs[0].charAt(i);
			int j = 1;
			while (j < strs.length) {
				if (strs[j].length() - 1 == i - 1)
					return result;
				if (c != strs[j].charAt(i))
					return result;
				j++;
			}
			result = result + c;
		}

		return result;
	}

	public static void main(String[] args) {
		//String[] strs = { "flower", "flow", "flight" };
		// String[] strs = {"dog","racecar","car"};
		// String[] strs = { "flower", "flow", "fight"};
		// String[] strs = { "ai","a" };
		String[] strs = {"a",""};
		System.out.println(longestCommonPrefix(strs));
	}

}
