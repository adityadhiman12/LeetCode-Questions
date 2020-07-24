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
    void inorder(TreeNode* root,vector<int>&v)
    {
        if(root)
        {
            inorder(root->left,v);
            v.push_back(root->val);
            inorder(root->right,v);
        }
    }
    
    void recreate(TreeNode *root,vector<int>&v)
    {
        if(root)
        {
            recreate(root->left,v);
            int sum=0;
            for(int i=0;i<v.size();i++)
                if(v[i]>=root->val)
                    sum+=v[i];
                root->val=sum;
            recreate(root->right,v);
                
        }
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        recreate(root,v);
        return root;
    }
};
