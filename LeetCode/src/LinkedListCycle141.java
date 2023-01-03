import java.util.*;

public class LinkedListCycle141 {
	
	public static boolean hasCycle(ListNode head) {
		/*
		HashMap<ListNode, Boolean> visited =  new HashMap<ListNode, Boolean>();
		
		ListNode temp = head;
		while(temp!=null) {			
			if(visited.containsKey(temp))return true;
			visited.put(temp, true);	
			temp= temp.next;
		}
		return false; 
		*/
		ListNode slowPointer = head;
		ListNode fastPointer = head;
		while(fastPointer != null && fastPointer.next != null) {
			slowPointer = slowPointer.next;
			fastPointer = fastPointer.next.next;
			if(slowPointer == fastPointer)return true;
		}
		return false;
    }
	
	public static void main(String[] args) {	
		ListNode l1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5,new ListNode(6))))));		
		System.out.print(hasCycle(l1));	
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
