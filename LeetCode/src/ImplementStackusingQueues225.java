import java.util.*;

public class ImplementStackusingQueues225 {
	public static void main(String[] args) {
		MyStack obj = new MyStack();
		obj.push(1);
		obj.push(2);
		obj.push(3);
		obj.push(4);
		obj.push(5);
		obj.push(6);
		System.out.println(obj.top());
		System.out.println(obj.pop());
		System.out.println(obj.empty());
	}
}

class MyStack {

	Queue<Integer> queue;

	public MyStack() {
		queue = new LinkedList<Integer>();
	}

	public void push(int x) {		
		queue.add(x);
	       for(int i=0;i<queue.size()-1;i++)
	       {
	           queue.add(queue.poll());
	       }
	}

	public int pop() {
		return queue.poll();
	}

	public int top() {
		return queue.peek();
	}

	public boolean empty() {
		return queue.isEmpty();
	}
}
