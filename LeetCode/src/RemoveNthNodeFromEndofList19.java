public class RemoveNthNodeFromEndofList19 {
	public static ListNode removeNthFromEnd(ListNode head, int n) {
		ListNode temp = head;
		int size = 0;
		while(temp!=null) {
			size++;
			temp = temp.next;
		}		
		
		// if list is null or only one node then return null
		//because for size zero there is nothing to remove
		//and for size 1 there is only one node which will remove 
		if(size == 0 || size == 1) return null;
		// if input has two node and 
		//asked to remove fist node that is (n=2)
		//then return second node 
		if(size - n == 0) return head.next; 
		 
		
		int traverse = 0;
		temp = head.next;
		ListNode previous = head;	
		
		while(temp!=null) {
			traverse++;
			
			if(traverse == size - n) {
				previous.next = temp.next;
			}
			previous = temp;
			temp = temp.next;
		}
		
        return head;
    }
	
	public static void main(String[] args) {
		ListNode l1 = new ListNode(1,new ListNode(2,new ListNode (3,new ListNode (4,new ListNode (5)))));
		//ListNode l1 = new ListNode(1,new ListNode(2));
		//ListNode l1 = new ListNode(1);
		int n = 2;
		ListNode result = removeNthFromEnd(l1,n);
		
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

