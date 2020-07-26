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
    
    int longest(TreeNode *root,int &m)
    {
        int l=root->left ? longest(root->left, m) : 0;
        int r=root->right ? longest(root->right, m) : 0;
        l=(root->left && root->left->val==root->val) ? l+1 : 0;
        r=(root->right && root->right->val==root->val) ? r+1 : 0;
        m=max(m,l+r);
        return max(l,r);
    }
    
    int longestUnivaluePath(TreeNode* root) {
        if(root)
        {
            int longP=0;
            longest(root,longP);
            return longP;
        }
        return 0;
    }
};
