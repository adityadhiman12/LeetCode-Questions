class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int>q1;
    queue<int>q2;
    MyStack() {
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int poped=q1.front();
        q1.pop();
        while(!q2.empty())
            q1.push(q2.front()),q2.pop();
        return poped;        
    }
    
    /** Get the top element. */
    int top() {
        return q1.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q1.empty())
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
