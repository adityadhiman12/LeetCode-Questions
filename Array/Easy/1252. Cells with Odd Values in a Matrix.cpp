class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
         vector<int> row(n,0);
         vector<int >colm(m,0);
        for(auto pair : indices)
        {
            row[pair[0]] ++;
            colm[pair[1]] ++;
        }
        int even_row = 0, even_colm = 0; 
        for(auto num : row)
        {
            if(num % 2 == 0) 
                even_row++;
        }
        for(auto num : colm)
        {
            if(num % 2 == 0) 
                even_colm ++;
        }
        return even_row*(m-even_colm)+(n-even_row)*even_colm;
    }
    
};
