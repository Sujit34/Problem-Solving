
public class FirstBadVersion278 {
	public int firstBadVersion(int n) {
		int low = 1;
		int high = n;
		while (low <= high) {
			int mid = low + (high - low) / 2;
			if (isBadVersion(mid) == true) {
				high = mid - 1;
			}
			if (isBadVersion(mid) == false) {
				low = mid + 1;
			}
		}
		return low;
	}
}
