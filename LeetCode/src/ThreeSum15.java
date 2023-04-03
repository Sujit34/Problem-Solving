import java.util.*;

public class ThreeSum15 {
	public static List<List<Integer>> threeSum(int[] nums) {
		List<List<Integer>> resList = new ArrayList<List<Integer>>();	

		Arrays.sort(nums);

		for (int i = 0; i < nums.length-2; i++) {
			
			if (i == 0 || nums[i] != nums[i - 1]) {
				int left = i + 1;
				int right = nums.length - 1;
				while (left < right) {
					List<Integer> list = new ArrayList<Integer>();
					if (nums[left] + nums[right] + nums[i] == 0) {
						list.add(nums[i]);
						list.add(nums[left]);
						list.add(nums[right]);
						resList.add(list);
						while(left<right && nums[left]==nums[left+1]) {
							left++;
						}
						while(left<right && nums[right]==nums[right-1]) {
							right--;
						}
						left++;
                        right--;
					} else if (nums[left] + nums[right] + nums[i] < 0) {
						left++;
					} else if (nums[left] + nums[right] + nums[i] > 0) {
						right--;
					}
				}
			}
		}

		return resList;
	}

	public static void main(String[] args) {
		int[] arr = {-2,0,0,2,2};
		var ress = threeSum(arr);
		
		for(var res : ress) {
			for(int i=0;i<res.size();i++) {
				System.out.print(res.get(i)+ " ");
			}
			System.out.println("");
		}
	}

}
