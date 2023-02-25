
public class OptimalPartitionofString2405 {
	public static int partitionString(String s) {
		int result = 0;

		String str = "";
		for (int i = 0; i < s.length(); i++) {
			if (str.contains(String.valueOf(s.charAt(i)))) {
				result = result + 1;
				str = "";
			}

			if (!str.contains(String.valueOf(s.charAt(i)))) {
				str = str + s.charAt(i);
			}
		}

		if (!str.isEmpty())
			result = result + 1;

		return result;
	}

	public static void main(String[] args) {
		System.out.println(partitionString("hdklqkcssgxlvehva"));
		System.out.println(partitionString("abacaba"));
		System.out.println(partitionString("aaaaaa"));
		System.out.println(partitionString("gizfdfri"));
	}

}
