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
    TreeNode *temp,*res;    
public:
    TreeNode* increasingBST(TreeNode* root) {
        if(!root)
            return NULL;
        increasingBST(root->left);
        if(!res)
        {
            res=new TreeNode(root->val);
            temp=res;
        }
        else
        {
            temp->right=new TreeNode(root->val);
            temp=temp->right;
        }
        increasingBST(root->right);
        return res;
    }
};
