class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
       vector<int>final;
        for(int i=0;i<nums.size()-1;i+=2)
        {
            int a=nums[i];
            int b=nums[i+1];
            while(a--)
            {
                final.push_back(b);
            }
        }
        return final;
    }
};
