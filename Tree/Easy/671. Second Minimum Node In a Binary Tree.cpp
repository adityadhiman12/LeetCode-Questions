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
    
    int findSecondMinimumValue(TreeNode* root) {
        if(root)
        {
            vector<int>v;
            inorder(root,v);
            sort(v.begin(),v.end());
            for(int i=0;i<v.size()-1;)
            {
                if(v[i]==v[i+1])
                    v.erase(v.begin()+i);
                else
                    i++;
            }
            if(v.size()<2)
                return -1;
            else
                return v[1];               
                
        }
        return -1;
    }
};
