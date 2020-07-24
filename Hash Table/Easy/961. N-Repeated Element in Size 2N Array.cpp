class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int>m;
        for(auto i:A)
            m[i]++;
        for(auto i:m)
            if(i.second>1)
                return i.first;
        return 0;
    }
};
