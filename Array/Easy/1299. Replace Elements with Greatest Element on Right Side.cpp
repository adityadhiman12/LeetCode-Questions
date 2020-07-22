class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxE=-1;
        for(int i=arr.size()-1;i>=0;i--)
        {
            int cur=arr[i];
            arr[i]=maxE;
            maxE=max(cur,maxE);            
        }
        return arr;
    }
};
