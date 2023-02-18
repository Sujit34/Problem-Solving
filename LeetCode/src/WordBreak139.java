import java.util.*;

public class WordBreak139 {
	public static boolean wordBreak(String s, List<String> wordDict) {
		boolean[] dp = new boolean[s.length() + 1];
		dp[s.length()] = true;
		for (int i = s.length() - 1; i >= 0; i--) {
			for (String w : wordDict) {
				if (i + w.length() <= s.length() && s.substring(i, i + w.length()).equals(w)) {
					dp[i] = dp[i + w.length()];
				}
				if (dp[i] == true)
					break;
			}
		}

		return dp[0];
	}

	public static void main(String[] args) {
		List<String> wordDict = new ArrayList<String>();
		wordDict.add("leet");
		wordDict.add("code");
		System.out.println(wordBreak("leetcode", wordDict));
		System.out.println(wordBreak("leetleetcode", wordDict));
		System.out.println(wordBreak("neetcode", wordDict));
	}
}
