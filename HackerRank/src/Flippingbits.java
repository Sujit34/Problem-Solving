
public class Flippingbits {
	public static long flippingBits(long n) {
		return (~n) & 0xffffffffL;	//bitwise NOT then AND with hexadecimal literal	
	}

	public static void main(String[] args) {
		System.out.println(flippingBits(1));
	}
}
