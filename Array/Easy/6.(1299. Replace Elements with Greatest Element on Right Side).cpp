class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>final;
        int maxE=-1;
        final.push_back(maxE);
        for(int i=arr.size()-1;i>0;i--)
        {
            maxE=max(arr[i],maxE);
            final.push_back(maxE);
        }
        reverse(final.begin(),final.end());
        return final;
    }
};
