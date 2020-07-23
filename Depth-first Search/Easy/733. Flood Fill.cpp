class Solution {
public:
    
    void dfs(int newR,int newC,vector<vector<int>>& image,int newColor,int oldColor)
    {
        if(newR<0 || newR>=image.size() || newC<0 || newC>=image[0].size() || image[newR][newC]!=oldColor)
            return ;
        image[newR][newC]=newColor;
        dfs(newR,newC+1,image,newColor,oldColor);
        dfs(newR+1,newC,image,newColor,oldColor);
        dfs(newR,newC-1,image,newColor,oldColor);
        dfs(newR-1,newC,image,newColor,oldColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]!=newColor)
            dfs(sr,sc,image,newColor,image[sr][sc]);
        return image;
    }
};
