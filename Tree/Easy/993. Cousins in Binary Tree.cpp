/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector<int> dfs(TreeNode *root,int target,int depth,int parent)
    {
        if(root)
        {
            if(root->val==target)
                return {depth,parent};
            parent=root->val;
            vector<int>left=dfs(root->left,target,depth+1,parent);
            vector<int>right=dfs(root->right,target,depth+1,parent);
            if(left.empty())
                return right;
            return left;
        }
        return {};
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        vector<int>v1=dfs(root,x,0,-1);
        vector<int>v2=dfs(root,y,0,-1);
        if(v1[0]==v2[0] && v1[1]!=v2[1] && !v1.empty() && !v2.empty())
            return true;
        return false;
    }
};
