
public class FindtheHighestAltitude1732 {
	public static int largestAltitude(int[] gain) {
		int highAltitude = 0;
		int previousGain = 0;
		for (int i = 0; i < gain.length; i++) {
			int newGain = previousGain + gain[i];
			previousGain =  newGain;
			if (highAltitude < newGain)
				highAltitude = newGain;
		}

		return highAltitude;
	}

	public static void main(String[] args) {
		int[] arr = {-5,1,5,0,-7 };
		System.out.println(largestAltitude(arr));
	}
}
