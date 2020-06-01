class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<char>s;
        string res;
        int count=0;
        for(auto i:S)
        {
            if(i=='(')
            {
                if(s.size()>0)
                    res+=i;
                s.push(i);                    
            }
            else
            {
                if(s.size()>1)
                    res+=i;
                s.pop();
            }
        }
        return res;
    }
};
