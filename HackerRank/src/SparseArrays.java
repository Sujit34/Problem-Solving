import java.util.*;

public class SparseArrays {
	public static List<Integer> matchingStrings(List<String> strings, List<String> queries) {
		// Write your code here
		List<Integer> list = new ArrayList<Integer>();
		HashMap<String, Integer> map = new HashMap<String, Integer>();
		for (String str : strings) {
			if (!map.containsKey(str)) {
				map.put(str, 1);
			} else {
				map.put(str, map.get(str) + 1);
			}
		}

		for (int i = 0; i < queries.size(); i++) {
			if (map.containsKey(queries.get(i))) {
				list.add(map.get(queries.get(i)));
			} else
				list.add(0);
		}

		return list;

	}

	public static void main(String[] args) {

		List<String> inputStrings = new ArrayList<String>();
		List<String> queryStrings = new ArrayList<String>();

		inputStrings.add("ab");
		inputStrings.add("ab");
		inputStrings.add("abc");

		queryStrings.add("ab");
		queryStrings.add("abc");
		queryStrings.add("bc");

		var list = matchingStrings(inputStrings, queryStrings);

		for (int l : list) {
			System.out.println(l);
		}

	}
}
