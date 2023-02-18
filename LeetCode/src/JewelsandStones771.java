import java.util.*;

public class JewelsandStones771 {
	public static int numJewelsInStones(String jewels, String stones) {
		int result = 0;
		HashMap<Character, Integer> hashMap = new HashMap<Character, Integer>();
		for (int i = 0; i < stones.length(); i++) {
			if (!hashMap.containsKey(stones.charAt(i))) {
				hashMap.put(stones.charAt(i), 1);
			} else {
				hashMap.put(stones.charAt(i), hashMap.get(stones.charAt(i)) + 1);
			}
		}
		for (int i = 0; i < jewels.length(); i++) {
			if (hashMap.containsKey(jewels.charAt(i))) {
				result = result + hashMap.get(jewels.charAt(i));
			}
		}
		return result;
	}

	public static void main(String[] args) {
		System.out.println(numJewelsInStones("aA", "aAAbbbb"));
		System.out.println(numJewelsInStones("z", "ZZZ"));
	}
}
