
public class MinimumAmountofTimetoCollectGarbage2391 {
	public static int garbageCollection(String[] garbage, int[] travel) {

		int metal = 0;
		int paper = 0;
		int glass = 0;

		int metalTruckTravel = 0;
		int paperTruckTravel = 0;
		int glassTruckTravel = 0;

		for (int i = 0; i < garbage.length; i++) {

			if (i > 0) {
				metalTruckTravel = metalTruckTravel + travel[i - 1];
				paperTruckTravel = paperTruckTravel + travel[i - 1];
				glassTruckTravel = glassTruckTravel + travel[i - 1];
			}

			for (int j = 0; j < garbage[i].length(); j++) {
				if (garbage[i].charAt(j) == 'M') {
					metal = metal + metalTruckTravel + 1;
					metalTruckTravel = 0;

				}
				if (garbage[i].charAt(j) == 'P') {
					paper = paper + paperTruckTravel + 1;
					paperTruckTravel = 0;
				}
				if (garbage[i].charAt(j) == 'G') {
					glass = glass + glassTruckTravel + 1;
					glassTruckTravel = 0;
				}
			}
		}

		return metal + paper + glass;
	}

	public static void main(String[] args) {
		String[] garbages = { "MMM", "PGM", "GP" };
		int[] travel = { 3, 10 };
		System.out.println(garbageCollection(garbages, travel));
	}
}
