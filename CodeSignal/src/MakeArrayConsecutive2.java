
public class MakeArrayConsecutive2 {
	int solution(int[] statues) {
	    int min = Integer.MAX_VALUE;
	    int max = Integer.MIN_VALUE;
	     
	    for(int i=0;i<statues.length;i++){
	        
	        if(statues[i]<min) min = statues[i];
	        if(statues[i]>max) max = statues[i];
	    }
	    
	    return (max-min+1) - statues.length;
	}
}
