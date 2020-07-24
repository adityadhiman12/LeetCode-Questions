class Solution {
public:
    
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(auto i:arr)
            m[i]++;
        bool vis[1001]={0};
        for(auto i:m)
        {
            if(vis[i.second])
                return false;
            vis[i.second]=true;
        }
        return true;
    }
};
