public class MergeTwoSortedLists21 {
	 public static ListNode mergeTwoLists(ListNode list1, ListNode list2) {
		 
		 ListNode result = null;
		 ListNode temp = null;
		 
		 while(list1 != null || list2!= null) {
			 if(list1!= null && list2!= null && list1.val == list2.val) {
				 if(temp==null) {
					 temp = result = new ListNode(list1.val);
					 temp.next = new ListNode(list2.val);
					 temp = temp.next;
					 list1 = list1.next;
					 list2 = list2.next;
				 }
				 else {
					 temp.next = new ListNode(list1.val);
					 temp.next.next = new ListNode(list2.val);
					 temp = temp.next.next;
					 list1 = list1.next;
					 list2 = list2.next;
				 }
			 }
			 
			 else if(list1!= null && list2!= null && list1.val < list2.val) {
				 while(list1 != null && list1.val < list2.val ) {
					 if(temp==null) {
						 temp = result = new ListNode(list1.val);						 					 
					 }
					 else {
						 temp.next = new ListNode(list1.val);						 
						 temp = temp.next;					 
					 }
					 list1 = list1.next;
				 }
				 
				 if(temp==null) {
					 temp = result = new ListNode(list2.val);						 					 
				 }
				 else {
					 temp.next = new ListNode(list2.val);						 
					 temp = temp.next;					 
				 }
				 list2 = list2.next;
			 }
			 
			 else if(list1!= null && list2!= null && list1.val > list2.val) {
				 while( list2 != null && list1.val > list2.val  ) {
					 if(temp==null) {
						 temp = result = new ListNode(list2.val);						 					 
					 }
					 else {
						 temp.next = new ListNode(list2.val);						 
						 temp = temp.next;					 
					 }
					 list2 = list2.next;
				 }
				 if(temp==null) {
					 temp = result = new ListNode(list1.val);						 					 
				 }
				 else {
					 temp.next = new ListNode(list1.val);						 
					 temp = temp.next;					 
				 }
				 list1 = list1.next;
			 }
			 
			 else if(list1!= null && list2== null) {				 
				 if(result==null) {
					 temp = result = new ListNode(list1.val);						 					 
				 }
				 else {
					 temp.next = new ListNode(list1.val);						 
					 temp = temp.next;					 
				 }
				 list1 = list1.next;				 
			 }
			 
			 else if(list1== null && list2!= null) {				 
				 if(temp==null) {
					 temp = result = new ListNode(list2.val);				 
				 }
				 else {
					 temp.next = new ListNode(list2.val);						 
					 temp = temp.next;					 
				 }
				 list2 = list2.next;				 
			 }
		 }	 
		 
		 return result;
	 }
	 
	 public static void main(String[] args) {
			//ListNode l1 = new ListNode(1,new ListNode(5,new ListNode (6)));	
			//ListNode l2 = new ListNode(1,new ListNode(3,new ListNode(4)));
			
			//ListNode l1 = new ListNode(1,new ListNode(2,new ListNode (4)));	
			//ListNode l2 = new ListNode(1,new ListNode(3,new ListNode(4)));
			
			//ListNode l1 = new ListNode(3,new ListNode(4,new ListNode (5)));	
			//ListNode l2 = new ListNode(2,new ListNode(4,new ListNode(6)));
		 
		    //ListNode l1 = new ListNode(2);	
		    //ListNode l2 = new ListNode(1);
		 
		 	ListNode l1 = null;	
		    ListNode l2 = null;
			
			ListNode result = mergeTwoLists(l1,l2);
			
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


