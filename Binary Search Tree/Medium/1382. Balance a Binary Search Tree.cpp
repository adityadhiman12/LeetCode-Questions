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
    
    TreeNode* create(vector<int>&temp,int start,int end)
    {
        if(start>end)
            return NULL;
        int mid=(start+end)/2;
        TreeNode *root=new TreeNode(temp[mid]);
        root->left=create(temp,start,mid-1);
        root->right=create(temp,mid+1,end);
        return root;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        return create(v,0,v.size()-1);
    }
};
