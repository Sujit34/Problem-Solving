import java.util.*;

public class IntegertoRoman12 {
	public static String intToRoman(int num) {
		String result = "";
		HashMap<String, Integer> hashMap = new HashMap<String, Integer>();

		// M -> 1000
		int M = num / 1000;
		hashMap.put("M", M);
		num = num % 1000;

		// CM -> 900
		int CM = num / 900;
		hashMap.put("CM", CM);
		num = num % 900;

		// D -> 500
		int D = num / 500;
		hashMap.put("D", D);
		num = num % 500;

		// CD -> 400
		int CD = num / 400;
		hashMap.put("CD", CD);
		num = num % 400;

		// C -> 100
		int C = num / 100;
		hashMap.put("C", C);
		num = num % 100;

		// XC -> 90
		int XC = num / 90;
		hashMap.put("XC", XC);
		num = num % 90;

		// L -> 50
		int L = num / 50;
		hashMap.put("L", L);
		num = num % 50;

		// XL -> 40
		int XL = num / 40;
		hashMap.put("XL", XL);
		num = num % 40;

		// X -> 10
		int X = num / 10;
		hashMap.put("X", X);
		num = num % 10;

		// IX ->9
		int IX = num / 9;
		hashMap.put("IX", IX);
		num = num % 9;

		// V -> 5
		int V = num / 5;
		hashMap.put("V", V);
		num = num % 5;

		// IV -> 4
		int IV = num / 4;
		hashMap.put("IV", IV);
		num = num % 4;

		// I -> 1
		int I = num;
		hashMap.put("I", I);

		for (int i = hashMap.get("M"); i >= 1; i--) {
			result = result + "M";
		}

		for (int i = hashMap.get("CM"); i >= 1; i--) {
			result = result + "CM";
		}

		for (int i = hashMap.get("D"); i >= 1; i--) {
			result = result + "D";
		}

		for (int i = hashMap.get("CD"); i >= 1; i--) {
			result = result + "CD";
		}

		for (int i = hashMap.get("C"); i >= 1; i--) {
			result = result + "C";
		}

		for (int i = hashMap.get("XC"); i >= 1; i--) {
			result = result + "XC";
		}

		for (int i = hashMap.get("L"); i >= 1; i--) {
			result = result + "L";
		}

		for (int i = hashMap.get("XL"); i >= 1; i--) {
			result = result + "XL";
		}

		for (int i = hashMap.get("X"); i >= 1; i--) {
			result = result + "X";
		}

		for (int i = hashMap.get("IX"); i >= 1; i--) {
			result = result + "IX";
		}

		for (int i = hashMap.get("V"); i >= 1; i--) {
			result = result + "V";
		}

		for (int i = hashMap.get("IV"); i >= 1; i--) {
			result = result + "IV";
		}

		for (int i = hashMap.get("I"); i >= 1; i--) {
			result = result + "I";
		}

		return result;
	}

	public static void main(String[] args) {
		System.out.println(intToRoman(3));// III
		System.out.println(intToRoman(58));// LVIII
		System.out.println(intToRoman(1994));// MCMXCIV
	}
}
