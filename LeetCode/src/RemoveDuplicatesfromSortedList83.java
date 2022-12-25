
public class RemoveDuplicatesfromSortedList83 {
	
	public static ListNode deleteDuplicates(ListNode head) {
        ListNode outerLoop = head;	
		
		while(outerLoop!=null) {
			int checkValue = outerLoop.val;
			ListNode temp = outerLoop.next;
			ListNode previous  = outerLoop;
			while(temp!=null) {
				if(checkValue == temp.val) {					
					while(temp!= null && temp.val == checkValue)
					{						
						temp = temp.next;
					}
					previous.next  = temp;
				}
				if(temp!=null)temp = temp.next;
				previous= previous.next;
			}					
			outerLoop = outerLoop.next;
		}
        return head;
    }
	public static void main(String[] args) {
		ListNode l1 = new ListNode(1,new ListNode(2,new ListNode (2,new ListNode (4,new ListNode (5)))));
		//ListNode l1 = new ListNode(1,new ListNode(1,new ListNode(2)));
		//ListNode l1 = new ListNode(1,new ListNode(1,new ListNode(2,new ListNode(3,new ListNode(3)))));
		//ListNode l1 = new ListNode(1,new ListNode(1,new ListNode(1,new ListNode(2))));
		//ListNode l1 = null;
		
		ListNode result = deleteDuplicates(l1);
		
		while(result!=null) {
			System.out.println(result.val);
			result = result.next;
		}   
	}
	static class ListNode {
	    int val;
	    ListNode next;
	    ListNode() {}
	    ListNode(int val) { this.val = val; }
	    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
	}

}
