import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class majorityElementII229 {

    public static List<Integer> majorityElementII(int[] nums) {

        /*
        List<Integer> list = new ArrayList<>();
        HashMap<Integer,Integer> hashMap = new HashMap<>();

        for(int num: nums){
            if(hashMap.containsKey(num) && !list.contains(num)){
                hashMap.put(num,hashMap.get(num)+1);
                if(hashMap.get(num)>nums.length/3)list.add(num);
            }
            else if (!hashMap.containsKey(num) && !list.contains(num)){
                hashMap.put(num, 1);
                if(hashMap.get(num)>nums.length/3)list.add(num);
            }

        }

        return list;
        */

        List<Integer> list = new ArrayList<>();
        int count1 = 0;
        int count2 = 0;
        int candidate1 = Integer.MIN_VALUE;
        int candidate2 = Integer.MIN_VALUE;

        for (int num : nums) {
            if (count1 == 0 && num != candidate2) {
                count1 = 1;
                candidate1 = num;
            } else if (count2 == 0 && num != candidate1) {
                count2 = 1;
                candidate2 = num;
            } else if (num == candidate1) count1++;
            else if (num == candidate2) count2++;
            else {
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;
        for (int num : nums) {
            if (num == candidate1) count1++;
            if (num == candidate2) count2++;
        }

        int size = nums.length/3+1;

        if (count1 >= size) list.add(candidate1);
        if (count2 >= size) list.add(candidate2);

        return list;
    }


    public static void main(String[] args) {
        int[] arr = {3, 2, 3};
        var ans = majorityElementII(arr);
        ans.forEach(System.out::println);
    }
}
