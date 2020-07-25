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
    
    void sum(TreeNode *root,vector<int>v)
    {
        if(root)
        {
            v.push_back(root->val);
            if(!root->left && !root->right)
            {
                int num=0;
                for(int i=0;i<v.size();i++)
                {
                    num=num*2+v[i];
                }
                ans+=num;
                v.clear();
            }
            sum(root->left,v);
            sum(root->right,v);
        }
    }
    
    int sumRootToLeaf(TreeNode* root) {
        if(root)
        {
            vector<int>v;
            sum(root,v);
            return ans;
        }
        return 0;
    }
};
