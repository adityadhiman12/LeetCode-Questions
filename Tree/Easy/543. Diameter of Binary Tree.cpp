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
    
    int ans=0;
    int height(TreeNode *root)
    {
        if(root)
        {
            int l=height(root->left);
            int r=height(root->right);
            ans=max(ans,l+r);
            return max(l,r)+1;   
        }
        return 0;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root)
        {
            ans=0;
            height(root);
            return ans;            
        }
        return 0;
    }
};
