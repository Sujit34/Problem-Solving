import java.util.*;

public class GroupAnagrams49 {
	public static List<List<String>> groupAnagrams(String[] strs) {
		List<List<String>> result = new ArrayList<List<String>>();

		for (int i = 0; i < strs.length; i++) {
			List<String> res = new ArrayList<String>();
			if(strs[i]!=null)res.add(strs[i]);
			for (int j = i+1 ; j < strs.length; j++) {
				if (isAnagram(strs[i], strs[j])) {
					res.add(strs[j]);
					strs[j]=null;
				}			
			}
			if(!res.isEmpty()) result.add(res);
		}

		return result;
	}

	public static boolean isAnagram(String s, String t) {	
		if(s==null||t==null)return false;
		if (s.length() != t.length())
			return false;
		int ascii_range = 128;
		int arr[] = new int[ascii_range];
		for (int i = 0; i < s.length(); i++) {
			arr[(int) (s.charAt(i))]++;
			arr[(int) (t.charAt(i))]--;
		}
		for (int i = 0; i < ascii_range; i++) {
			if (arr[i] != 0)
				return false;
		}

		return true;
	}
	public static void main(String[] args) {
		String arr[]= {"eat","tea","tan","ate","nat","bat"};
		groupAnagrams(arr);
		
	}
}
