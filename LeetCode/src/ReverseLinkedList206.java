
public class ReverseLinkedList206 {

	public static ListNode reverseList(ListNode head) {
		/*
		ListNode dummy = new ListNode (0);
		ListNode previousNode = dummy;
		ListNode nextNode  = null;
		
		ListNode temp = head;
		
		while(temp!=null) {
			previousNode.next = new ListNode(temp.val);
			previousNode.next.next = nextNode;
			nextNode = previousNode.next;
			temp=temp.next;
		}		
		
		return dummy.next;
*/
		ListNode nextNode = null;
		ListNode temp = head;
		while(temp!=null) {
			ListNode newNode = new ListNode(temp.val);
			newNode.next = nextNode;
			nextNode = newNode;
			temp = temp.next;
		}
		return nextNode;
	}

	public static void main(String[] args) {
		ListNode l1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
		// ListNode l1 = new ListNode(1,new ListNode(1,new ListNode(2)));
		// ListNode l1 = new ListNode(1,new ListNode(1,new ListNode(2,new ListNode(3,new
		// ListNode(3)))));
		// ListNode l1 = new ListNode(1,new ListNode(1,new ListNode(1,new
		// ListNode(2))));
		// ListNode l1 = null;

		ListNode result = reverseList(l1);

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
