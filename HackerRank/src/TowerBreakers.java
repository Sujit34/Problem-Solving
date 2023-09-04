
public class TowerBreakers {
	public static int towerBreakers(int n, int m) {
		if (n == 1)
			return 1;
		if (m == 1)
			return 2;

		return n % 2 == 0 ? 2 : 1;
	}

	public static void main(String[] args) {
		System.out.println(towerBreakers(1, 4));
	}
}
