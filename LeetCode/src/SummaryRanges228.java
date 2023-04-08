import java.util.*;

public class SummaryRanges228 {
	public static List<String> summaryRanges(int[] nums) {
		List<String> list = new ArrayList<String>();

		for (int i = 0; i < nums.length; i++) {
			int initial = i;
			while (i < nums.length - 1 && nums[i] + 1 == nums[i + 1]) {
				i++;
			}
			if (initial != i)
				list.add(nums[initial] + "->" + nums[i]);
			else
				list.add("" + nums[initial] + "");
		}
		return list;
	}

	public static void main(String[] args) {
		int[] arr = { 0, 2, 3, 4, 6, 8, 9 };
		var res = summaryRanges(arr);
		for (String r : res) {
			System.out.println(r);
		}
	}
}
