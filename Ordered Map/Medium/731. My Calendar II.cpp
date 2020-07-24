class MyCalendarTwo {

    private:
    map<int,int>m;
    
    public:
    
    bool canAdd(int n)
    {
        int count=0;
        for(auto i:m)
        {
            count+=i.second;
            if(count>n)
                return false;
        }
        return true;
    }
    
    bool book(int start, int end) {
        m[start]++;
        m[end]--;
        if(canAdd(2))
            return true;
        else
        {
            m[start]--;
            m[end]++;
            return false;
        }
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */
