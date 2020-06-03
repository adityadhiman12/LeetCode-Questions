class Solution {
public:
    bool isValid(string str) {
        if(!str.length())
            return true;
        stack<char>s;
        for(int i=0;i<str.length();i++)
        {
            if(s.empty())
            {
                if(str[i]==')' || str[i]=='}' || str[i]==']' )
                    return false;
                s.push(str[i]);
            }
            else if((str[i]==')' || str[i]=='}' || str[i]==']' ))
            {
                if((s.top()=='(' && str[i]==')') || (s.top()=='{' && str[i]=='}') || (s.top()=='[' && str[i]==']'))
                    s.pop();
                else
                    return false;
            }
            else
                s.push(str[i]);
        }
        return s.size()?false:true;
        
    }
};
