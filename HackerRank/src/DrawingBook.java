public class DrawingBook {
	public static int pageCount(int n, int p) {
		int totalPageToTurn = n / 2;
		int PageToTurnFromFront = p / 2;
		int pageToTurnFromBack = totalPageToTurn - PageToTurnFromFront;
		return PageToTurnFromFront > pageToTurnFromBack ? pageToTurnFromBack : PageToTurnFromFront;
	}

	public static void main(String[] args) {
		System.out.println(pageCount(6, 4));
	}
}
