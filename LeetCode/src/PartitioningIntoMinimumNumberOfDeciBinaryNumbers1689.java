
public class PartitioningIntoMinimumNumberOfDeciBinaryNumbers1689 {
	public static int minPartitions(String n) {
		int result = 0;
		for (int i = 0; i < n.length(); i++) {
			if ((n.charAt(i) - '0') > result)
				result = n.charAt(i) - '0';
			if (result == 9)
				return result;
		}
		return result;
	}

	public static void main(String[] args) {
		System.out.println(minPartitions("27346209830709182346"));
	}
}
