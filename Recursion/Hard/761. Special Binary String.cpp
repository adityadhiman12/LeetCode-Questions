class Solution {
public:
    
    string dfs(string &s,int &i)
    {
        string res;
        vector<string>t;
        while(i<s.size()  && res.empty())
        {
            if(s[i++]=='1')
                t.push_back(dfs(s,i));
            else
                res+="1";
        }
        bool prefix=res.size();
        sort(t.begin(),t.end());
        for(auto i=t.rbegin();i!=t.rend();i++)
            res+=*i;
        if(prefix)
            res+='0';
        return res;
    }
    
    string makeLargestSpecial(string S) {
        int i=0;
        return dfs(S,i);
    }
};
