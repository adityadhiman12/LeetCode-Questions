class MyCircularDeque {
    vector<int> q;
    int size;
public:
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) {
        size = k;
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(q.size() == size)
            return false;
        q.insert(q.begin(), value);
        return true;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(q.size() == size)
            return false;
        q.push_back(value);
        return true;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(q.empty())
            return false;
        q.erase(q.begin());
        return true;
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if(q.empty())
            return false;
        q.pop_back();
        return true;
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if(q.empty())
          return -1;
        return q[0];
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        if(q.empty())
            return -1;
        return q[q.size() - 1];
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return q.empty();
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return q.size() == size;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
