public class SortList148 {

	public static ListNode sortList(ListNode head) {
		if(head == null || head.next == null)return head;
		
		//split the list
		ListNode left = head;
		ListNode right  = getMid(head);
		ListNode temp = right.next;
		right.next = null;
		right = temp;
		
		left = sortList(left);
		right  = sortList(right);
		return merge(left,right);
		
	}
	
	
	// get mid
	public static ListNode getMid(ListNode head) {
		ListNode slowPointer = head;
		ListNode fastPointer = head.next;

		while (fastPointer != null && fastPointer.next != null) {
			slowPointer = slowPointer.next;
			fastPointer = fastPointer.next.next;
		}

		return slowPointer;
	}

	// merge
	public static ListNode merge(ListNode left, ListNode right) {

		ListNode dummy = new ListNode(0);
		ListNode temp = dummy;

		while (left != null && right != null) {
			if (left.val <= right.val) {
				temp.next = left;
				left = left.next;
				temp = temp.next;
			} else {
				temp.next = right;
				right = right.next;
				temp = temp.next;
			}
		}

		while (left != null) {
			temp.next = left;
			left = left.next;
			temp = temp.next;
		}
		while (right != null) {
			temp.next = right;
			right = right.next;
			temp = temp.next;
		}

		return dummy.next;
	}

	public static void main(String[] args) {
		ListNode l1 = new ListNode(1, new ListNode(2, new ListNode(6, new ListNode(3, new ListNode(4, new ListNode(5, new ListNode(6)))))));

		ListNode result = sortList(l1);

		while (result != null) {
			System.out.println(result.val);
			result = result.next;
		}
	}

	static class ListNode {
		int val;
		ListNode next;

		ListNode() {
		}

		ListNode(int val) {
			this.val = val;
		}

		ListNode(int val, ListNode next) {
			this.val = val;
			this.next = next;
		}
	}

}
