import java.util.*;

public class CountItemsMatchingaRule1773 {
	public static int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
		int count = 0;
		for (int i = 0; i < items.size(); i++) {

			if (ruleKey.equals("type")) {
				if (items.get(i).get(0).equals(ruleValue)) {
					count++;
				}
			}
			if (ruleKey.equals("color")) {
				if (items.get(i).get(1).equals(ruleValue)) {
					count++;
				}
			}
			if (ruleKey.equals("name")) {
				if (items.get(i).get(2).equals(ruleValue)) {
					count++;
				}
			}
		}

		return count;
	}

	public static void main(String[] args) {
		List<List<String>> lists = Arrays.asList(
				Arrays.asList("phone", "blue", "pixel"),
				Arrays.asList("computer", "silver", "phone"), 
				Arrays.asList("phone", "gold", "iphone"));
		System.out.println(countMatches(lists, "color", "blue"));

	}
}
