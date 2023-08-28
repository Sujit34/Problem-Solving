import java.util.*;

public class DiagonalDifference {
	public static int diagonalDifference(List<List<Integer>> arr) {
		
		int diagonal1 = 0;
		int diagonal2 = 0;
		for(int i=0;i<arr.size();i++) {
			diagonal1 = diagonal1 + arr.get(i).get(i);
			diagonal2 = diagonal2 + arr.get(i).get(arr.get(i).size()-1-i);
		}	
		return Math.abs(diagonal1-diagonal2);
	}

	public static void main(String[] args) {
		List<List<Integer>> array = new ArrayList<>();
		/*
		List<Integer> arr1 = new ArrayList<Integer>();
		arr1.add(1);
		arr1.add(2);
		arr1.add(3);
		array.add(arr1);
		List<Integer> arr2 = new ArrayList<Integer>();
		arr2.add(4);
		arr2.add(5);
		arr2.add(6);
		array.add(arr2);
		List<Integer> arr3 = new ArrayList<Integer>();
		arr3.add(9);
		arr3.add(8);
		arr3.add(9);
		array.add(arr3);
		*/
		
		
		List<Integer> arr1 = new ArrayList<Integer>();
		arr1.add(11);
		arr1.add(2);
		arr1.add(4);
		array.add(arr1);
		List<Integer> arr2 = new ArrayList<Integer>();
		arr2.add(4);
		arr2.add(5);
		arr2.add(6);
		array.add(arr2);
		List<Integer> arr3 = new ArrayList<Integer>();
		arr3.add(10);
		arr3.add(8);
		arr3.add(-12);
		array.add(arr3);
		System.out.println(diagonalDifference(array));

	}
}
