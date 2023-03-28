import java.util.*;

public class CheckiftheSentenceIsPangram1832 {
	public static boolean checkIfPangram(String sentence) {

		HashMap<Integer, Integer> hashMap = new HashMap<Integer, Integer>();
		for (int i = 0; i < sentence.length(); i++) {
			hashMap.put((int) sentence.charAt(i), 1);
		}
		return hashMap.size() == 26 ? true : false;
	}

	public static void main(String[] args) {
		System.out.println(checkIfPangram("thequickbrownfoxjumpsoverthelazydog"));
		System.out.println(checkIfPangram("leetcode"));
	}
}
