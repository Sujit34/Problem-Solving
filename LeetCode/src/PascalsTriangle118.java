import java.util.*;

public class PascalsTriangle118 {
	public static List<List<Integer>> generate(int numRows) {
		List<List<Integer>> pascalsTriangle = new ArrayList<List<Integer>>();

		for (int i = 0; i < numRows; i++) {
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

		return pascalsTriangle;
	}

	public static void main(String[] args) {
		var result = generate(4);
		for (int i = 0; i < result.size(); i++) {
			for (int j = 0; j < result.get(i).size(); j++) {
				System.out.print(result.get(i).get(j) + " ");
			}
			System.out.println();
		}
	}

}
