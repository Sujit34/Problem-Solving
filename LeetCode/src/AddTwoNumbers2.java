public class AddTwoNumbers2 {
	
	public static ListNode addTwoNumbers(ListNode l1, ListNode l2) {	
		
		ListNode result = null;
		ListNode temp = null;
		
		int sum =0;
		int carry = 0;
		
		while(l1!=null || l2!= null) {				
			
			if(l1!=null) {
				sum = sum + l1.val;
				l1 = l1.next;
			}
			
			if(l2!=null) {
				sum=sum+l2.val;
				l2=l2.next;
			}	
			
			ListNode newNode = new ListNode(sum %10);
			carry = sum = sum / 10;
			
			if(temp==null) {
				temp = newNode;
				result = newNode;
			}		
			else {
				temp.next = newNode;
				temp = temp.next;
			}
		}
		
		if(carry>0) {
			ListNode newNode = new ListNode(carry);
			temp.next = newNode;
			
		}
		return result;
	}
	
	public static void main(String[] args) {
		//ListNode l1 = new ListNode(2,new ListNode(4,new ListNode (3)));	
		//ListNode l2 = new ListNode(5,new ListNode(6,new ListNode(4)));
		
		  ListNode l1 = new ListNode(9,
				  new ListNode(9,
						  new ListNode (9,
								  new ListNode (9,
										  new ListNode (9,
												  new ListNode (9,
														  new ListNode (9)))))));	
		  ListNode l2 = new ListNode(9,
				  new ListNode(9,
						  new ListNode(9,
								  new ListNode (9))));
		
		ListNode result = addTwoNumbers(l1,l2);
		
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


