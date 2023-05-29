
public class palindromeRearranging {
	boolean solution(String inputString) {
	    
	    int[] arr = new int[26];
	    
	    for(int i=0;i<inputString.length();i++){
	        arr[inputString.charAt(i)-'a'] += 1;
	    }
	    
	    int oddCount = 0;
	    for(int i=0;i<26;i++){
	        
	        if(arr[i]%2!=0) oddCount++;
	    }
	    
	    return oddCount<=1 ? true : false;
	}

}
