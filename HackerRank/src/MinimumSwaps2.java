
public class MinimumSwaps2 {
	static int minimumSwaps(int[] arr) {
        int min = arr[0];
        int min_index = 0;
        int swap =0;
        
        for(int i = 0;i<arr.length;i++){
            if(arr[i]<min){
                min = arr[i];
                min_index = i;
            }            
        }
        
        if(min_index!=0){
            int temp = arr[0];
            arr[0]= arr[min_index];
            arr[min_index]= temp;
            swap++;
        }
        
        for(int cur = 1; cur<arr.length-1; cur++){
            int pos = arr[cur] - arr[0];
            while(arr[pos]!= arr[cur]){
                int temp = arr[cur];
                arr[cur] = arr[pos];
                arr[pos] = temp;
                swap++;
                pos = arr[cur] - arr[0];
            }
            cur = pos;
        }
     return swap;   
    }
	
	public static void main(String[] args) {
        
		int [] arr = {4,3,1,2};
        System.out.println(minimumSwaps(arr));

        
    }
}
