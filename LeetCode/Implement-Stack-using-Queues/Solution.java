class MyStack {
    Queue<Integer> Q1= new LinkedList<>();
    Queue<Integer> Q2= new LinkedList<>();

    public MyStack() {
        
    }
    
    public void push(int x) {
        while(!Q1.isEmpty()){
            Q2.offer(Q1.poll());
        }
        Q1.offer(x);
        while(!Q2.isEmpty()){
            Q1.offer(Q2.poll());
        }

    }
    
    public int pop() {
        if(empty()){
            return 0;
        }
        return Q1.poll();
    }
    
    public int top() {
        if(empty()){
            return 0;
        }
        return Q1.peek();
    }
    
    public boolean empty() {
        return Q1.isEmpty();
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */