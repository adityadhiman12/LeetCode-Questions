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
    
    void inorder(TreeNode *root,vector<int>&v)
    {
        if(root)
        {
            inorder(root->left,v);
            v.push_back(root->val);
            inorder(root->right,v);
        }
    }
    
    bool findTarget(TreeNode* root, int k) {
        if(root)
        {
            vector<int>v;
            inorder(root,v);
            int start=0;
            int end=v.size()-1;
            while(start<end)
            {
                if(v[start]+v[end]>k)
                    end--;
                else if(v[start]+v[end]<k)
                    start++;
                else
                    return true;
            }
            return false;
        }
        return false;
    }
};
