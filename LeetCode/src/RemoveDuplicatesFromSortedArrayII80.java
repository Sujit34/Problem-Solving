public class RemoveDuplicatesFromSortedArrayII80 {
    public static void main(String[] args) {
        int[] arr = { 1,1,1,2,2,3 };
        System.out.println(removeDuplicates(arr));
    }
    public static int removeDuplicates(int[] nums) {
        int k = 0;
        int count =0;
        for(int i=0;i<nums.length;i++){
            int temp = nums[i];
            nums[k]=nums[i];
            k++;
            count++;
            while(i<nums.length-1 && nums[i]==nums[i+1] && count>=2){
                i++;
            }
            if(temp==nums[i] && count>=2)count = 0;
            if(i<nums.length-1 && temp!=nums[i+1]) count =0 ;
        }
        return k;
    }

}
