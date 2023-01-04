
public class ReverseBits190 {
	
	/*
	 * Set res = 0
	 * Get the bit from 0 to 31. 
	 * For every bit if it is 1 then do set bit operation on (31-pos) position of res 
	 */
	
	public static int reverseBits(int n) {
		int res = 0;
		for (int pos = 0; pos <= 31; pos++) {
			//get bit for every position
			int bitMask = 1 << pos;
			if ((bitMask & n) != 0) {
				res = setBit((31 - pos), res);			
			}
		}

		return res;
	}	
	
	//set bit
	public static int setBit(int pos, int n) {
		int bitMask = 1 << pos;
		int newNumber = bitMask | n;
		return newNumber;
	}

	public static void main(String[] args) {
		System.out.println(reverseBits(43261596));		
	}
}
