
public class Numberof1Bits191 {
	public static int hammingWeight(int n) {
		int countOfOne = 0;
		// Using get bit strategy 
		for(int i=0;i<32;i++) {
			int bitMask = 1<<i;
			if((bitMask & n) != 0)countOfOne++;
		}
		
		return countOfOne;
	}
	public static void main(String[] args) {
		System.out.println(hammingWeight(2147483647));
	}

}
