class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int posInd=0;
        int size=A.size();
        while(posInd<size && A[posInd]<0)
            posInd++;
        int negInd=posInd-1;
        vector<int>res(size);
        int finalInd=0;
        while(negInd>=0 && posInd<size)
        {
            if(A[negInd]*A[negInd] < A[posInd]*A[posInd])
            {
                res[finalInd++]=A[negInd]*A[negInd];
                negInd--;
            }
            else
            {
                res[finalInd++]=A[posInd]*A[posInd];
                posInd++;
            }       
        }
        while(negInd>=0)
        {
            res[finalInd++]=A[negInd]*A[negInd];
            negInd--;
        }
        while(posInd<size)
        {
            res[finalInd++]=A[posInd]*A[posInd];
            posInd++;
        }
        return res;
    }
};
