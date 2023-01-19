import java.util.ArrayList;
import java.util.List;

public class PascalsTriangleII119 {
	public static List<Integer> getRow(int rowIndex) {
		List<List<Integer>> pascalsTriangle = new ArrayList<List<Integer>>();

		for (int i = 0; i <=rowIndex; i++) {
			List<Integer> row = new ArrayList<Integer>();
			for (int j = 0; j < i + 1; j++) {
				if (j == 0 || j == i)
					row.add(1);
				else {
					row.add(pascalsTriangle.get(i - 1).get(j - 1) + pascalsTriangle.get(i - 1).get(j));
				}
			}
			pascalsTriangle.add(row);
		}
		return pascalsTriangle.get(rowIndex);
	}

	public static void main(String[] args) {
		var result = getRow(1);
		for (int i = 0; i < result.size(); i++) {
			System.out.print(result.get(i) + " ");
		}

	}
}
