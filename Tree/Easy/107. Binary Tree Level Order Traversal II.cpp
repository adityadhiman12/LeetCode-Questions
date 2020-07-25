/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL)
            return v;
        list<TreeNode*>q;
        q.push_back(root);
        while(!q.empty())
        {
            int nodeCount=q.size();
            vector<int>x;
            while(nodeCount>0)
            {

                auto t=q.front();
                x.push_back(t->val);  
                q.pop_front();
                if(t->left)
                {
                    q.push_back(t->left);
                }
                if(t->right)
                {
                    q.push_back(t->right);
                }
                nodeCount--;
            }            
            v.push_back(x);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
