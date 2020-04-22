class Solution {
public:
    vector<int> diStringMatch(string S) {
        int n = S.size(), l = 0, r = n;
        vector<int> res(n+1, 0);
        for(int i = 0; i < n; i++){
            switch(S[i]){
                case 'I':
                    res[i] = l++;
                    break;
                case 'D':
                    res[i] = r--;
                    break;
            }
        }
        res[n] = l;
        return res;
    }
};
