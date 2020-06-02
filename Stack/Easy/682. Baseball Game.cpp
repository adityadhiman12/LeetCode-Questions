class Solution {
public:
    int calPoints(vector<string>& ops) {
        if(ops.empty())
            return 0;
        stack<int> s;
        int sum=0;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="+")
            {
                int a,b;
                a=s.top();
                s.pop();
                b=s.top();
                s.push(a);
                sum+=(a+b);
                s.push(a+b);
            }
            else if(ops[i]=="C")
            {
                sum-=s.top();
                s.pop();
            }
            else if(ops[i]=="D")
            {
                s.push(s.top()*2);
                sum+=(s.top());                    
            }
            else
            {
                int n=stoi(ops[i]);
                sum+=n;
                s.push(n);
            }
        }
        return sum;    
    }        
};
