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
    
    int res=INT_MAX;
    TreeNode *pre=NULL;
    void in(TreeNode *root)
    {
        if(root)
        {
            in(root->left);
            if(pre!=NULL)
                res=min(res,root->val-pre->val);
            pre=root;
            in(root->right);
        }
    }
    
    int minDiffInBST(TreeNode* root) {
        if(root)
        {
            in(root);
            return res;
        }
        return 0;
    }
};
