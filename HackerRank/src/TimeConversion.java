
public class TimeConversion {
	public static String timeConversion(String s) {
		// Write your code here
		int hr = 0;
		if (s.charAt(8) == 'A') {
			hr = 10 * Integer.parseInt(String.valueOf(s.charAt(0))) + Integer.parseInt(String.valueOf(s.charAt(1)));
			hr = hr % 12;
		} else {
			hr = 10 * Integer.parseInt(String.valueOf(s.charAt(0))) + Integer.parseInt(String.valueOf(s.charAt(1)));			
			hr = 12 + (hr % 12);
		}

		return (Integer.toString(hr).length() == 1 ? '0' + Integer.toString(hr)
				:Integer.toString(hr))
				+ s.substring(2, 8);

	}

	public static void main(String[] args) {
		System.out.println(timeConversion("11:00:00AM"));
		System.out.println(timeConversion("12:45:54PM"));
	}

}
