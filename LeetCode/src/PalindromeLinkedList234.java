public class PalindromeLinkedList234 {
	
	public static boolean isPalindrome(ListNode head) {
		
		//reverse
		ListNode reverse = null;
		ListNode temp = head;
		while(temp!=null) {
			ListNode newNode = new ListNode(temp.val);
			newNode.next = reverse;
			reverse = newNode;
			temp = temp.next;
		}
		
		//match			
		while(head!= null) {
			if(head.val != reverse.val)return false;
			head = head.next;
			reverse = reverse.next;
		}
		
		return true;
        
    }
	
	public static void main(String[] args) {		
		ListNode l1 = new ListNode(1, new ListNode(2, new ListNode(2, new ListNode(1))));
		//ListNode l1 = new ListNode(1, new ListNode(2, new ListNode(2, new ListNode(1,new ListNode(3)))));
			
		System.out.println(isPalindrome(l1));
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
