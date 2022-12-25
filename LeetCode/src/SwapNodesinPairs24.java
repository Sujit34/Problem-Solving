public class SwapNodesinPairs24 {
	
	public static ListNode swapPairs(ListNode head) {
		
		ListNode dummy  = new ListNode(0,head);	
		
		ListNode LinkingNode = dummy;
		ListNode first = head;
		
		while(first!=null && first.next!=null ) {
			
			// set nextPair and second node 
			ListNode nextPair = first.next.next;
			ListNode second  = first.next;
			
			// swap first and second node and 
			// link with previous pair's second node(for first pair link to dummy node)
			LinkingNode.next = second;
			second.next = first;
			first.next  = nextPair;
			
			// update linkingNode and first node for next pair
			LinkingNode = first;
			first = nextPair;
			
		}
		
		return dummy.next;		
        
    }
	
	public static void main(String[] args) {
		ListNode l1 = new ListNode(1,new ListNode(2,new ListNode (3,new ListNode (4,new ListNode (5)))));
		//ListNode l1 = new ListNode(1,new ListNode(2));
		//ListNode l1 = new ListNode(1);
		
		ListNode result = swapPairs(l1);
		
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
