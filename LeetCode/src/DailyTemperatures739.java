import java.util.*;

public class DailyTemperatures739 {
	public static int[] dailyTemperatures(int[] temperatures) {
		int result[] = new int[temperatures.length];
		Stack<Integer> stack = new Stack<Integer>();

		for (int i = 0; i < temperatures.length; i++) {
			while (!stack.isEmpty() && temperatures[stack.peek()] < temperatures[i]) {
				result[stack.peek()] = i - stack.peek();
				stack.pop();
			}
			stack.push(i);
			result[i] = 0;
		}

		return result;
	}

	public static void main(String[] args) {

		int temperatures[] = { 30, 60, 90 };
		//int temperatures[] = {30,40,50,60};
		//int temperatures[] = { 73, 74, 75, 71, 69, 72, 76, 73 };

		var res = dailyTemperatures(temperatures);
		for (int i = 0; i < res.length; i++) {
			System.out.println(res[i]);
		}

	}
}
