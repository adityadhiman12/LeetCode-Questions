class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int sum = 0;
        for (int i = 0; i < grid.size(); ++i) 
        {
            int m = 0, n = 0;
            for (int j = 0; j < grid.size(); ++j) 
            {
                if (grid[i][j] > m) m = grid[i][j];
                if (grid[j][i] > n) n = grid[j][i];
                if (grid[i][j]) ++sum;
            }
            sum += m + n;
        }
        return sum;
    }
};
