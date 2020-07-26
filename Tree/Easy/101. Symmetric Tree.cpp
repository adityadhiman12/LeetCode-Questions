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
    
    bool mirror(TreeNode *root1,TreeNode *root2)
    {
        if(root1 && root2)
            return((root1->val==root2->val) && mirror(root1->left,root2->right) && mirror(root1->right,root2->left));
        if(!root1 && !root2)
            return true;
        return false;
        
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root)
            return mirror(root,root);
        return true;
    }
};
