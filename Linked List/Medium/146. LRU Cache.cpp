class LRUCache {
public:
    int cacheSize;
    list<pair<int, int>>l;
    map<int, list<pair<int, int>>::iterator>m;
    LRUCache(int capacity) {
        cacheSize=capacity;
    }
    
    int get(int key) {
        if(m.find(key)!=m.end())
        {
            l.splice(l.begin(), l, m[key]);
            return m[key]->second;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end())
        {
            l.splice(l.begin(), l, m[key]);
            m[key]->second=value;
            return;
        }
        if(l.size()==cacheSize)
        {
            auto lastKey=l.back().first;
            l.pop_back();
            m.erase(lastKey);
        }
        l.push_front({key, value});
        m[key]=l.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
