class Solution {
public:
    bool divisorGame(int N) {
        int i=1;
        int turn=0;
        while(N && i<N)
        {
            if(N%i==0)
                N-=i;
            if(turn)
                turn=0;
            else
                turn=1;
        }
        if(turn==0)
            return false;
        return true;
    }
};
