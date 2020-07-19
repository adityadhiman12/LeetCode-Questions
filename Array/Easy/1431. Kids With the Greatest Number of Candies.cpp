class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxC=INT_MIN;
        for(int i=0;i<candies.size();i++)
            maxC=max(candies[i],maxC);
        vector<bool>res(candies.size(),false);
        for(int i=0;i<candies.size();i++)
            if(candies[i]+extraCandies>=maxC)
                res[i]=true;
        return res;
    }
};
