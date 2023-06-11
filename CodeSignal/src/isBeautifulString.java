
public class isBeautifulString {
	boolean solution(String inputString) {
		int[] arr = new int[26];
		for (int i = 0; i < inputString.length(); i++) {
			arr[inputString.charAt(i) - 'a']++;
		}
		for (int i = 0; i < 25; i++) {
			if (arr[i + 1] > arr[i])
				return false;
		}
		return true;
	}

}
