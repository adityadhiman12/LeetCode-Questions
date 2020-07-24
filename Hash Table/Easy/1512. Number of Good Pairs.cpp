class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        int count=0;
        for(auto i:nums)
        {
            count+=m[i];
            m[i]++;
        }
        return count;
    }
};
