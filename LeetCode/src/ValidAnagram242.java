public class ValidAnagram242 {

	public static boolean isAnagram(String s, String t) {
		if (s.length() != t.length())
			return false;
		int ascii_range = 128;
		int arr[] = new int[ascii_range];
		for (int i = 0; i < s.length(); i++) {
			arr[(int)(s.charAt(i))]++;
			arr[(int)(t.charAt(i))]--;
		}
		for(int i=0;i<ascii_range;i++) {
			if(arr[i]!=0)return false;
		}

		return true;
	}

	public static void main(String[] args) {
		System.out.println(isAnagram("anagram", "nagaram"));
		System.out.println(isAnagram("rat", "car"));
		System.out.println(isAnagram("abc def", "def abc"));
	}

}
