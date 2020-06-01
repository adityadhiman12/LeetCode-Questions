class Solution {
public:
    string removeDuplicates(string S) {
        string res;
        stack<char>s;
        for(int i=0;i<S.length();i++)
        {
            if(s.empty())
                s.push(S[i]);
            else if(s.top()==S[i])
                s.pop();
            else
                s.push(S[i]);
            
        }
        cout<<s.size();
        while(!s.empty())
        {
            res.insert(0,1,s.top());
            s.pop();
        }
        return res;
    }
};
