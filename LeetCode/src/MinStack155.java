import java.util.*;

public class MinStack155 {
	public static void main(String[] args) {
		MinStack obj = new MinStack();
		obj.push(-2);
		obj.push(0);
		obj.push(-3);		
		System.out.println(obj.getMin());
		obj.pop();
		System.out.println(obj.top());
		System.out.println(obj.getMin());
	}
}
/*
class MinStack {
	Stack<Integer> stack;
    public MinStack() {
    	stack = new  Stack<Integer>();
    }
    
    public void push(int val) {
        stack.push(val);
    }
    
    public void pop() {
        stack.pop();
    }
    
    public int top() {
        return stack.peek();
    }
    
    public int getMin() {
       int min = Integer.MAX_VALUE;
       Iterator itr = stack.iterator();
       while(itr.hasNext()) {
    	   int curValue = (int)itr.next();
    	   if(curValue<min)min=curValue;
       }
       return min;
    }
}
*/
class MinStack {
	Stack<Integer> stack;
	Stack<Integer> minStack;
    public MinStack() {
    	stack = new  Stack<Integer>();
    	minStack = new  Stack<Integer>();
    }
    
    public void push(int val) {
        stack.push(val);
        if(minStack.isEmpty()) minStack.push(val);
        else {
        	if(val<minStack.peek())minStack.push(val);
        	else minStack.push(minStack.peek());
        }
    }
    
    public void pop() {
        stack.pop();
        minStack.pop();
    }
    
    public int top() {
        return stack.peek();
    }
    
    public int getMin() {       
       return minStack.peek();
    }
}

