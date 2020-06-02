class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char>s1;
        stack<char>s2; 
        for(int i=0;i<S.length();i++)
        {
            if(S[i]!='#')
                s1.push(S[i]);
            else
            {
                if(s1.empty())
                    continue;
                else
                    s1.pop();
            }
                
        }
        for(int i=0;i<T.length();i++)
        {
            if(T[i]!='#')
                s2.push(T[i]);
            else
            {
                if(s2.empty())
                    continue;
                else
                    s2.pop();
            }
        }
        string a;
        string b;
        while(!s1.empty())
        {
            a+=s1.top();
            s1.pop();
        }
        while(!s2.empty())
        {
            b+=s2.top();
            s2.pop();
        }
        if(a.compare(b)==0)
            return true;
        return false;
    }
};
