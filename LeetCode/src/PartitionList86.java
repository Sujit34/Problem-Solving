public class PartitionList86 {
	public static ListNode partition(ListNode head, int x) {

		
		ListNode temp = head;	
		
		ListNode dummy = new ListNode(0);
		ListNode lessThanX = dummy;
		
		ListNode dummy1 = new ListNode(0);
		ListNode rest = dummy1;		
		

		while (temp != null) {

			if (temp.val >= x) {
				rest.next = new ListNode(temp.val);
				rest = rest.next;

			} else {
				lessThanX.next = new ListNode(temp.val);
				lessThanX = lessThanX.next;

			}

			temp = temp.next;
		}
		lessThanX.next = dummy1.next;

		return dummy.next;
	}

	public static void main(String[] args) {
		ListNode l1 = new ListNode(1,
				new ListNode(4, new ListNode(3, new ListNode(2, new ListNode(5, new ListNode(2))))));

		ListNode result = partition(l1, 3);

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
