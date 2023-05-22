import java.util.*;
public class AllLongestStrings {
	String[] solution(String[] inputArray) {
	    List<String> list = new ArrayList<String>();
	    int max = Integer.MIN_VALUE;    
	    for(int i=0;i<inputArray.length;i++){
	        if(inputArray[i].length()>max)max = inputArray[i].length();
	    }
	    for(int i=0;i<inputArray.length;i++){
	        if(inputArray[i].length()==max){
	            list.add(inputArray[i]);
	        }
	    }
	    return list.toArray(new String[0]);
	}
}
