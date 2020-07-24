class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            for(auto it:m)
                if(it.first!=nums[i] && it.first<=nums[i])
                    count+=it.second;
            res.push_back(count);
        }
        return res;
    }
};
