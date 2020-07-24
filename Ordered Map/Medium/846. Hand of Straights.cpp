class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
        if(!hand.size()%W)
            return false;
        map<int,int>m;
        for(int i=0;i<hand.size();i++)
            m[hand[i]]++;
        while(m.size()!=0)
        {
            int cur=m.begin()->first;
            for(int i=0;i<W;i++)
            {
                if(m[cur+i]==0)
                    return false;
                else if(--m[cur+i]<1)
                    m.erase(cur+i);
            }
        }
        return true;
    }
};
