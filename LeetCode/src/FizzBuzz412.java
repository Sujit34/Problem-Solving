import java.util.*;

public class FizzBuzz412 {
	public static List<String> fizzBuzz(int n) {
		List<String> list = new ArrayList<String>();
		for (int i = 1; i <= n; i++) {
			if (i % 3 == 0 && i % 5 == 0)
				list.add("FizzBuzz");
			else if (i % 3 == 0 && i % 5 != 0)
				list.add("Fizz");
			else if (i % 3 != 0 && i % 5 == 0)
				list.add("Buzz");
			else
				list.add(Integer.toString(i));
		}

		return list;
	}

	public static void main(String[] args) {
		var result = fizzBuzz(5);
		for (int i = 0; i < result.size(); i++) {
			System.out.println(result.get(i));
		}
	}
}
