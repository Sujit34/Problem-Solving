//TIME LIMT, Could Not Solve//


import java.util.*;

public class SubstringwithConcatenationofAllWords30 {

	public static void main(String[] args) {
		String[] w = {"word","good","best","good"};
		var list = findSubstring("wordgoodgoodgoodbestword", w);
		for (int l : list) {
			System.out.println(l);
		}

	}

	public static List<Integer> findSubstring(String s, String[] words) {
		List<Integer> list = new ArrayList<Integer>();

		int wordsLength = words.length;
		int wordLength = words[0].length();

		int concatenatedStringSize = wordsLength * wordLength;

		int start = 0;
		int end = concatenatedStringSize;

		while (end <= s.length()) {
			String str = s.substring(start, end);

			int left = 0;
			int right = wordLength;

			int wordCount = 0;
			String[] copiedWords = Arrays.copyOf(words, words.length);
			
			while (right <= str.length()) {
				String str1 = str.substring(left, right);
				if (!isExist(copiedWords, str1)) {
					break;
				}
				left = left + wordLength;
				right = right + wordLength;
				wordCount++;
			}
			if (wordCount == wordsLength)
				list.add(start);
			System.out.print(start);
			System.out.println(end);
			start++;
			end++;

		}

		return list;
	}

	public static boolean isExist(String[] wordArray, String wordToCheck) {		
		boolean wordExists = false;
		for (int i = 0; i < wordArray.length; i++) {
			if (wordArray[i].equals(wordToCheck)) {
				wordExists = true;
				wordArray[i] = "";
				break;
			}
		}
		return wordExists;
	}
}
