
public class RemoveLinkedListElements203 {
	
	 public static ListNode removeElements(ListNode head, int val) {
		 
		 ListNode dummy = new ListNode(0);
		 ListNode previousNode = dummy;
		 ListNode temp = head;
		 while(temp!=null) {
			 if(temp.val!=val) {
				 previousNode.next = new ListNode(temp.val);
				 previousNode = previousNode.next;
			 }
			 temp = temp.next;
		 } 
		 
		 return dummy.next;	        
	    }
	
	public static void main(String[] args) {
		ListNode l1 = new ListNode(1, new ListNode(2, new ListNode(6, new ListNode(3, new ListNode(4,new ListNode(5,new ListNode(6)))))));
		// ListNode l1 = new ListNode(1,new ListNode(1,new ListNode(2)));
		// ListNode l1 = new ListNode(1,new ListNode(1,new ListNode(2,new ListNode(3,new
		// ListNode(3)))));
		// ListNode l1 = new ListNode(1,new ListNode(1,new ListNode(1,new
		// ListNode(2))));
		// ListNode l1 = null;

		ListNode result = removeElements(l1,6);

		while (result != null) {
			System.out.println(result.val);
			result = result.next;
		}
	}

	static class ListNode {
		int val;
		ListNode next;

		ListNode() {}

		ListNode(int val) {	
			this.val = val;
		}

		ListNode(int val, ListNode next) {
			this.val = val;
			this.next = next;
		}
	}

}
