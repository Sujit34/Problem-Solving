
public class differentSymbolsNaive {
	int solution(String s) {
	    int [] arr = new int[26];
	    for(int i=0;i<s.length();i++){
	        arr[s.charAt(i)-'a']++;
	    }
	    int count =0;
	    for(int i=0;i<26;i++){
	        if(arr[i]==0) count++;
	    }
	    return 26-count;
	}
}
