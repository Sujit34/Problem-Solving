
public class MaximumNumberofWordsFoundinSentences2114 {
	public static int mostWordsFound(String[] sentences) {
		int max = 0;

		for (int i = 0; i < sentences.length; i++) {
			String[] arrOfStr = sentences[i].split(" ");
			if (arrOfStr.length > max)
				max = arrOfStr.length;
		}
		return max;
	}

	public static void main(String[] args) {
		String[] arr = { "please wait", "continue to fight", "continue to win" };
		System.out.println(mostWordsFound(arr));
	}
}
