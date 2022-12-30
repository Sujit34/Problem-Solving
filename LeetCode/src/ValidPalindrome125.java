
public class ValidPalindrome125 {
	public static boolean isPalindrome(String s) {
		
		s = s.toLowerCase();
		s = s.replaceAll("[^a-zA-Z0-9]", "");

		for (int i = 0, j = s.length() - 1; i < s.length(); i++, j--) {
			if (s.charAt(i) != s.charAt(j))
				return false;
		}
		return true;
    }
	
	public static void main(String[] args) {
		System.out.println(isPalindrome(" "));
	}

}
