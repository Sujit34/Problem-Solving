import java.util.*;

public class SubarrayDivision1 {
	public static int birthday(List<Integer> s, int d, int m) {
		int possibleWays = 0;
		for (int i = 0; i < s.size(); i++) {
			int sum = s.get(i);
			int length = 1;
			if (sum == d && length == m)
				possibleWays++;
			for (int j = i + 1; j < s.size(); j++) {
				sum = sum + s.get(j);
				length = length + 1;

				if (sum == d && length == m) {
					possibleWays++;
				}

			}
		}
		return possibleWays;
	}

	public static void main(String[] args) {
		List<Integer> list = new ArrayList<Integer>();
		/*
		 * list.add(2); list.add(5); list.add(1); list.add(3); list.add(4); list.add(4);
		 * list.add(3); list.add(5); list.add(1); list.add(1); list.add(2); list.add(1);
		 * list.add(4); list.add(1); list.add(3); list.add(3); list.add(4); list.add(2);
		 * list.add(1);
		 */
		list.add(2);
		list.add(2);
		list.add(1);
		list.add(3);
		list.add(2);
		System.out.println(birthday(list, 4, 2));
	}
}
