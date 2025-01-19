import java.util.HashMap;

public class RomanToInteger13 {
	public static int romanToInt(String s) {
		int sum = 0;
		for (int i = 0; i < s.length(); i++) {
			if (Character.compare(s.charAt(i), 'I') == 0) {
				if (i < s.length() - 1 && Character.compare(s.charAt(i + 1), 'V') == 0) {
					sum = sum + 4;
					i = i + 1; continue;
				} else if (i < s.length() - 1 && Character.compare(s.charAt(i + 1), 'X') == 0) {
					sum = sum + 9; 
					i = i + 1; continue;
				} else {
					sum = sum + 1;
				}
			}
			if (Character.compare(s.charAt(i), 'V') == 0) {
				sum = sum + 5;
			}
			if (Character.compare(s.charAt(i), 'X') == 0) {
				if (i < s.length() - 1 && Character.compare(s.charAt(i + 1), 'L') == 0) {
					sum = sum + 40;
					i = i + 1; continue;
				} else if (i < s.length() - 1 && Character.compare(s.charAt(i + 1), 'C') == 0) {
					sum = sum + 90; 
					i = i + 1; continue;
				} else {
					sum = sum + 10;
				}
			}
			if (Character.compare(s.charAt(i), 'L') == 0) {
				sum = sum + 50;
			}
			if (Character.compare(s.charAt(i), 'C') == 0) {
				if (i < s.length() - 1 && Character.compare(s.charAt(i + 1), 'D') == 0) {
					sum = sum + 400;
					i = i + 1; continue;
				} else if (i < s.length() - 1 && Character.compare(s.charAt(i + 1), 'M') == 0) {
					sum = sum + 900;
					i = i + 1; continue;
				} else {
					sum = sum + 100;
				}
			}
			if (Character.compare(s.charAt(i), 'D') == 0) {
				sum = sum + 500;
			}
			if (Character.compare(s.charAt(i), 'M') == 0) {
				sum = sum + 1000;
			}
		}

		return sum;
		
		/*
		HashMap<Character, Integer> hashMap = new HashMap<>();
		
		hashMap.put('I', 1);
		hashMap.put('V', 5);
		hashMap.put('X', 10);
		hashMap.put('L', 50);
		hashMap.put('C', 100);
		hashMap.put('D', 500);
		hashMap.put('M', 1000);
		
		int sum = 0;
		int preValue = hashMap.get(s.charAt(0));
		
		for(int i=1;i<s.length();i++) {
			int currentValue = hashMap.get(s.charAt(i));
			if(currentValue>preValue)sum-=preValue;
			else sum+=preValue;
			preValue = currentValue;
		}
		sum+=preValue;	     
		return sum;
		*/
	}

	public static void main(String[] args) {

		System.out.println(romanToInt("MCMXCIV"));
		System.out.println(romanToInt("MCMXCIVII"));

	}

}
