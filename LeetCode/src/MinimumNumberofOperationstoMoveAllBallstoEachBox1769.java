
public class MinimumNumberofOperationstoMoveAllBallstoEachBox1769 {
public static int[] minOperations(String boxes) {
    /*    
		int[] result = new int[boxes.length()];
        
        for(int i=0;i<boxes.length();i++) {
        	for(int j=0;j<boxes.length();j++) {
        		if(i!=j && boxes.charAt(j)=='1') {
        			result[i] = result[i] + Math.abs(i-j);
        		}
        	}
        }      
        return result;
     */
	
		int length = boxes.length();
		int[] prefix = new int[length];
		int[] suffix = new int[length];
		int[] result = new int[length];
		
		int count = 0;
		if(boxes.charAt(0)=='1') count++;
		for(int i=1;i<length;i++) {
			prefix[i] = prefix[i-1] + count;
			if(boxes.charAt(i)=='1') count++;
		}
		
		count = 0;
		if(boxes.charAt(length-1)=='1') count++;
		for(int i=length-2;i>=0;i--) {
			suffix[i] = suffix[i+1] + count;
			if(boxes.charAt(i)=='1') count++;
		}
		
		for(int i=0;i<length;i++) {
			result[i] = prefix[i] + suffix[i]; 
		}
	
		return result;
    }
public static void main(String[] args) {
	var res = minOperations("001011");
	for(int i=0;i<res.length;i++) {
		System.out.println(res[i]);
	}
}
}
