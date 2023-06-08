
public class growingPlant {
	static int solution(int upSpeed, int downSpeed, int desiredHeight) {
		int netSpeed = 0;
		int dayCount = 0;
		while (netSpeed < desiredHeight) {
			netSpeed = netSpeed + upSpeed;
			dayCount++;
			if (netSpeed >= desiredHeight)
				break;
			netSpeed = netSpeed - downSpeed;

		}
		return dayCount;
	}

	public static void main(String[] args) {
		System.out.println(solution(10, 9, 4));
	}
}
