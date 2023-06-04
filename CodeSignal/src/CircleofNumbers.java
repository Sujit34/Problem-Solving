
public class CircleofNumbers {
	int solution(int n, int firstNumber) {
		return ((n / 2) + firstNumber) >= n ? ((n / 2) + firstNumber) - n : ((n / 2) + firstNumber);
	}
}
