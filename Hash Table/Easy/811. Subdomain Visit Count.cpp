class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
     unordered_map<string,int>m;
        for(auto domain:cpdomains)
        {
            int i=domain.find(" ");
            int n=stoi(domain.substr(0,i));
            string s=domain.substr(i+1);
            for(int i=0;i<s.size();i++)
                if(s[i]=='.')
                    m[s.substr(i+1)]+=n;
            m[s]+=n;
        }   
        vector<string>res;
        for(auto i:m)
            res.push_back(to_string(i.second)+" "+i.first);
        return res;
    }
};
