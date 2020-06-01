class Solution {
public:
    vector<string> buildArray(vector<int>& a, int n) {
        vector<string>res;
        int j=1;
        for(int i=0;i<a.size();i++)
        {
            while(a[i]!=j)
            {
                res.push_back("Push");
                res.push_back("Pop");    
                j++;
            }
            res.push_back("Push");
            j++;
            
        }
        return res;
    }
};
