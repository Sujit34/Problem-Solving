
public class ReorderList143 {

	public static ListNode reorderList(ListNode head) {
		if(head==null||head.next==null) return head;
		
		ListNode firstHalf = new ListNode(0);
		ListNode temp = firstHalf;
		ListNode slowPointer = head;
		ListNode fastPointer = head.next;
		

		// first half
		while (fastPointer != null) {
			temp.next = new ListNode(slowPointer.val);
			temp = temp.next;
			slowPointer = slowPointer.next;
			if (fastPointer.next == null)
				break;
			else {
				fastPointer = fastPointer.next.next;
				if (fastPointer == null) {
					temp.next = new ListNode(slowPointer.val);
					slowPointer = slowPointer.next;
				}
			}

		}		

		// reverse second half
		ListNode reverseSecondHalf = null;
		temp = slowPointer;
		while (temp != null) {
			ListNode newNode = new ListNode(temp.val);
			newNode.next = reverseSecondHalf;
			reverseSecondHalf = newNode;
			temp = temp.next;
		}
		
		//merge
		ListNode result = head;
		temp = firstHalf.next.next;
		result.next = new ListNode(reverseSecondHalf.val);
		result = result.next;
		reverseSecondHalf = reverseSecondHalf.next;
		while (temp != null) {				
			
			result.next = new ListNode(temp.val);				
			result = result.next;
			temp = temp.next;
			
			if (reverseSecondHalf != null) {		
				result.next = new ListNode(reverseSecondHalf.val);				
				result = result.next;
				reverseSecondHalf = reverseSecondHalf.next;								
			}
			
		}	
		return head;
		
	}

	public static void main(String[] args) {
		//ListNode l1 = new ListNode(1,	new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5, new ListNode(6, new ListNode(7)))))));
		ListNode l1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5,new ListNode(6))))));	
		
		
		ListNode result = reorderList(l1);

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
