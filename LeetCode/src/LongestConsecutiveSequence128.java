import java.util.*;

public class LongestConsecutiveSequence128 {
	public static int longestConsecutive(int[] nums) {
		HashSet<Integer> set = new HashSet<Integer>();
		for (int i = 0; i < nums.length; i++) {
			set.add(nums[i]);
		}
		int longSeq = 0;
		for (int s : set) {
			if (!set.contains(s - 1)) {
				int currNum = s;
				int curSeq = 1;

				while (set.contains(currNum + 1)) {
					curSeq += 1;
					currNum += 1;
				}
				if (curSeq > longSeq)
					longSeq = curSeq;
			}
		}

		return longSeq;
	}

	public static void main(String[] args) {
		int[] arr = { 100, 4, 200, 1, 3, 2 };
		System.out.println(longestConsecutive(arr));
	}
}
