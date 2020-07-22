class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0;i<A.size();i++)
        {
            int start=0;
            int end=A[i].size()-1;
            while(start<end)
            {
                swap(A[i][start],A[i][end]);
                start++;
                end--;
            }
        }
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<A[i].size();j++)
            {
                if(A[i][j])
                    A[i][j]=0;
                else
                    A[i][j]=1;
            }
        }
        return A;
    }
};
