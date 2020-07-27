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
    vector<TreeNode*> allPossibleFBT(int N) {
        if(N==0)
            return {NULL};
        if(N==1)
            return {new TreeNode(0)};
        int re=N-1;
        vector<TreeNode*>ans;
        for(int i=0;i<=re;i++)
        {
            int l=i;
            int r=re-i;
            if(l%2!=0 && r%2!=0)
            {
                vector<TreeNode*>lp=allPossibleFBT(l);
                vector<TreeNode*>rp=allPossibleFBT(r);
                for(auto lefty:lp)
                {
                    for(auto righty:rp)
                    {
                        TreeNode *root=new TreeNode(0);
                        root->left=lefty;
                        root->right=righty;
                        ans.push_back(root);
                    }
                }
                    
            }
        }
        return ans;
    }
};
