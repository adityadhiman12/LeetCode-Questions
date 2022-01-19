class MyCircularQueue {
    
    
public:
    int size;
    int maxSize;
    int front;
    int back;
    vector<int> q;
    
     MyCircularQueue(int k): size(0), maxSize(k), front(0), back(-1), q(vector<int>(k, 0)) {}
    
    
    bool enQueue(int value) {
        if(size==maxSize)
            return false;
        if(++back==maxSize)
            back=0;
        q[back]=value;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(size==0)
            return false;
        if(++front==maxSize)
            front=0;
        size--;
        return true;
    }
    
    int Front() {
        if(size==0)
            return -1;
        return q[front];
    }
    
    int Rear() {
        if(size==0)
            return -1;
        return q[back];
        
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return maxSize==size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
