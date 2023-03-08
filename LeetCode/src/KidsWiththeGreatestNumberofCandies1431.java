import java.util.*;

public class KidsWiththeGreatestNumberofCandies1431 {
	public static List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
		List<Boolean> list = new ArrayList<Boolean>();
		int max = 0;
		for (int i = 0; i < candies.length; i++) {
			if (max < candies[i])
				max = candies[i];
		}
		for (int i = 0; i < candies.length; i++) {
			if (candies[i] + extraCandies >= max)
				list.add(true);
			else
				list.add(false);
		}
		return list;
	}

	public static void main(String[] args) {
		int[] arr = { 12, 1, 12 };
		var result = kidsWithCandies(arr, 10);
		for (int i = 0; i < result.size(); i++) {
			System.out.println(result.get(i));
		}
	}
}
