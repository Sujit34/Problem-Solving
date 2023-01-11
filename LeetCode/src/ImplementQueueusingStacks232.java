import java.util.*;

public class ImplementQueueusingStacks232 {
	public static void main(String[] args) {
		MyQueue obj = new MyQueue();
		obj.push(1);
		obj.push(2);
		obj.push(3);
		obj.push(4);
		System.out.println(obj.pop());
		obj.push(5);
		System.out.println(obj.pop());
		System.out.println(obj.pop());
		System.out.println(obj.pop());
		System.out.println(obj.pop());
		System.out.println(obj.empty());
	}
}

class MyQueue {
	Stack<Integer> stack;
	Stack <Integer> tempStack;
	public MyQueue() {
		stack = new Stack<Integer>();
		tempStack = new Stack<Integer>(); 
	}

	public void push(int x) {
		tempStack.clear();
		stack.add(x);
		for(int i= stack.size()-1;i>=0;i--) {
			tempStack.push(stack.get(i));
		}
	}

	public int pop() {
		stack.remove(tempStack.peek());
		return tempStack.pop();
	}

	public int peek() {
		return tempStack.peek();
	}

	public boolean empty() {
        return tempStack.isEmpty();
    }
}
