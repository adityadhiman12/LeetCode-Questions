class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0;
        int j=n;
        int index=0;
        vector<int>res(2*n);
        while(i<n && j<(2*n))
        {
            res[index++]=nums[i++];
            res[index++]=nums[j++];
        }
        return res;
    }
};
