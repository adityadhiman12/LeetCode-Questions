class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
            return false;
        vector<int> s1_freq(128, 0), s2_freq(128, 0);
        int i = 0;
        for(; i < s1.size(); i++) 
        {
            s1_freq[s1[i]]++;
            s2_freq[s2[i]]++;
        }
        
        if(s1_freq == s2_freq)
            return true;
        for(; i < s2.size() ; i++) 
        {
            s2_freq[s2[i - s1.size()]]--;
            s2_freq[s2[i]]++;
            if(s1_freq == s2_freq)
                return true;
        }
        return false;
    }
};
