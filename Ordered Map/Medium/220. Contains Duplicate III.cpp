class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        map<long long int,long long int>m;
        for(int i=0;i<nums.size();i++)
        {
            auto it=m.lower_bound((long long int )nums[i]-(long long int )t);
            while(it!=m.end() && it->second<(i-k))
                it=m.erase(it);
            if(it!=m.end() && nums[i]>=it->first-t)
                return true;
            m[nums[i]]=i;
        }
        return false;
    }
};
