
public class isLucky {
	static boolean solution(int n) {
	    int totalSum = 0;
	    int secondHalfSum = 0;
	    
	    int number = n;
	    int digitCount =0;
	    
	    while(number!=0){
	        totalSum += number%10;
	        number /=10;
	        digitCount++;    
	    }
	    
	    int halfLength = digitCount/2;
	    
	    while(n!=0 && halfLength!=0){
	        secondHalfSum += n %10;
	        n/=10;
	        halfLength--;
	    }
	    
	    
	    return totalSum-secondHalfSum == secondHalfSum ? true : false;
	    
	}
	
	public static void main(String[] args) {
		System.out.println(solution(239017));
	}
}
