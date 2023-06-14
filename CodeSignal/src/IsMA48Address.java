
public class IsMA48Address {
	boolean solution(String inputString) {
	    int pairCount = 0;
	    int count = 0;
	    for(int i=0;i<inputString.length();i++){
	        
	        if(Character.isDigit(inputString.charAt(i))) count++;
	        
	        else if(inputString.charAt(i)>='A' && inputString.charAt(i)<='F') count++;
	        
	        else if(inputString.charAt(i)=='-'){
	            if(i==inputString.length()-1) return false;
	            if(count!=2) return false;
	            count=0;
	            pairCount++;
	        }
	        else{
	            return false;
	        }
	    }
	    if(count==2)pairCount++;
	    return pairCount==6;    
	}

}
