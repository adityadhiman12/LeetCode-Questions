class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int zero=0,i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                swap(nums[zero++],nums[i]);
        }
    }
};
