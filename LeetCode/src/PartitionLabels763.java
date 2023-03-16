import java.util.*;

public class PartitionLabels763 {
	public static List<Integer> partitionLabels(String s) {
		List<Integer> res = new ArrayList<Integer>();
		HashMap<Character, Integer> hashMap = new HashMap<Character, Integer>();

		for (int i = 0; i < s.length(); i++) {
			hashMap.put(s.charAt(i), i);
		}

		int maxLastIndex = 0;
		int start = 0;
		for (int i = 0; i < s.length(); i++) {
			int lastIndex = hashMap.get(s.charAt(i));
			if (maxLastIndex < lastIndex)
				maxLastIndex = lastIndex;
			if (maxLastIndex == i) {
				res.add(i - start + 1);
				start = i + 1;
			}
		}

		return res;
	}

	public static void main(String[] args) {
		var result = partitionLabels("ababcbacadefegdehijhklij");
		for (int i = 0; i < result.size(); i++) {
			System.out.println(result.get(i));
		}
	}

}
