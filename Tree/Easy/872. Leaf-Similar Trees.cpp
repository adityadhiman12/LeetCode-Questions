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
    
    void countLeaf(TreeNode* root,vector<int>&v)
    {
        if(root)
        {
            if(root->left && root->right)
            {
                countLeaf(root->left,v);
                countLeaf(root->right,v);
            }
            else if(root->left)
                countLeaf(root->left,v);
            else if(root->right)
                countLeaf(root->right,v);
            else
                v.push_back(root->val);
        }
        
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        countLeaf(root1,v1);
        countLeaf(root2,v2);
        if(v1.size()!=v2.size())
            return false;
        for(int i=0;i<v1.size();i++)
            if(v1[i]!=v2[i])
            {
                cout<<v1[i]<<" "<<v2[i]<<endl;
                return false;
            }
                
        return true;
    }
};
