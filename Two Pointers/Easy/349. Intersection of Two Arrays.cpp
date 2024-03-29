class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int n1=nums1.size();
        int j=0;
        int n2=nums2.size();
        while(i<n1 && j<n2)
        {
            if(nums1[i]==nums2[j])
            {
                res.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j])
            {
                j++;                
            }
            else 
            {
                i++;
            }
            while(i>0 && i<n1 && nums1[i]==nums1[i-1])
                i++;
            while(j>0 && j<n2 && nums2[j]==nums2[j-1])
                j++;
        }
        return res;
    }
};
