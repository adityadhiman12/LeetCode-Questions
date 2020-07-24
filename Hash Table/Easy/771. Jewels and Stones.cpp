class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,int>m;
        for(auto i:J)
            m[i]=0;
        int count=0;
        for(auto i:S)
            if(m.find(i)!=m.end())
                count++;
        return count;
    }
};
