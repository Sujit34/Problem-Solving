
public class almostIncreasingSequence {
	static boolean  solution(int[] sequence) { 
		int track = 0;
	    for (int i = 0; i < sequence.length - 1; i++) {
	            if (sequence[i] - sequence[i+1] >= 0) {
	                    track += 1;
	            if (i - 1 >= 0 && i + 2 <= sequence.length - 1
	            && sequence[i] - sequence[i+2] >= 0
	            && sequence[i-1] - sequence[i+1] >= 0) {
	                    return false;
	            }
	        }
	    }
	    return track <= 1 ? true : false;
	}
	public static void main(String[] args) {
		int[] arr = {10, 1, 2, 3, 4, 5};
		System.out.println(solution(arr));
	}

}
