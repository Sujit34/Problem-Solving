
public class chessBoardCellColor {
	boolean solution(String cell1, String cell2) {
		if (((int) cell1.charAt(0) - (int) cell2.charAt(0)) % 2 == 0) {
			if ((int) cell1.charAt(1) % 2 == 0 && (int) cell2.charAt(1) % 2 == 0)
				return true;
			else if ((int) cell1.charAt(1) % 2 != 0 && (int) cell2.charAt(1) % 2 != 0)
				return true;
			else
				return false;
		} else {
			if ((int) cell1.charAt(1) % 2 == 0 && (int) cell2.charAt(1) % 2 == 0)
				return false;
			else if ((int) cell1.charAt(1) % 2 != 0 && (int) cell2.charAt(1) % 2 != 0)
				return false;
			else
				return true;
		}
	}

}
