import java.util.*;
public class SingleNumber136 {
	public static void main(String[] args) {
		System.out.println(singleNumber(new int[] { 2,1,2,4,4}));
	}
	
	public static int singleNumber(int[] nums) {
		List<Integer> list = new ArrayList<>();
        for(int i=0;i<nums.length;i++) {
        	if(!list.contains(nums[i])) {
        		list.add(nums[i]);
        	}
        	else {
        		list.remove(list.indexOf(nums[i]));
        	}
        }
        return list.get(0);
    }

}