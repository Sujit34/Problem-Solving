public class LinkedListCycleII142 {
	
	public static ListNode detectCycle(ListNode head) {
		ListNode slowPointer = head;
		ListNode fastPointer = head;
		while(fastPointer != null && fastPointer.next != null) {
			slowPointer = slowPointer.next;
			fastPointer = fastPointer.next.next;
			if(slowPointer == fastPointer){
				while(slowPointer!=head){
					slowPointer=slowPointer.next;
                    head=head.next;
                }
                return slowPointer;
			}
		}
		return null;
    }

	public static void main(String[] args) {	
		ListNode l1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5,new ListNode(6))))));
		System.out.print(detectCycle(l1).val);	
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
