import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class TwoDArrayDS {
	public static int hourglassSum(List<List<Integer>> arr) {
		int max = Integer.MIN_VALUE;
		for (int i = 0; i <= 3; i++) {
			int sum = 0;
			for (int j = 0; j <= 3; j++) {
				sum = arr.get(i).get(j) + arr.get(i).get(j + 1) + arr.get(i).get(j + 2) + arr.get(i + 1).get(j + 1)
						+ arr.get(i + 2).get(j) + arr.get(i + 2).get(j + 1) + arr.get(i + 2).get(j + 2);

				max = sum > max ? sum : max;
			}

		}
		return max;
	}

	public static void main(String[] args) throws IOException {
		List<List<Integer>> a = new ArrayList<>();

		ArrayList<Integer> a1 = new ArrayList<Integer>();

		a1.add(-9);
		a1.add(-9);
		a1.add(-9);
		a1.add(1);
		a1.add(1);
		a1.add(1);
		a.add(a1);
		a1 = new ArrayList<Integer>();

		a1.add(-9);
		a1.add(-9);
		a1.add(-9);
		a1.add(1);
		a1.add(1);
		a1.add(1);
		a.add(a1);
		a1 = new ArrayList<Integer>();

		a1.add(-9);
		a1.add(-9);
		a1.add(-9);
		a1.add(1);
		a1.add(1);
		a1.add(1);
		a.add(a1);
		a1 = new ArrayList<Integer>();

		a1.add(-9);
		a1.add(-9);
		a1.add(-9);
		a1.add(1);
		a1.add(1);
		a1.add(1);
		a.add(a1);
		a1 = new ArrayList<Integer>();

		a1.add(-9);
		a1.add(-9);
		a1.add(-9);
		a1.add(1);
		a1.add(1);
		a1.add(1);
		a.add(a1);
		a1 = new ArrayList<Integer>();

		a1.add(-9);
		a1.add(-9);
		a1.add(-9);
		a1.add(1);
		a1.add(1);
		a1.add(1);
		a.add(a1);
		a1 = new ArrayList<Integer>();

		int result = hourglassSum(a);
		System.out.println(result);

	}

}
