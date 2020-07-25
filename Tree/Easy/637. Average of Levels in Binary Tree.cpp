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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root)
        {
            queue<TreeNode*>q;
            q.push(root);
            vector<double>res;
            while(!q.empty())
            {
                int size=q.size();
                vector<int>v;
                while(size--)
                {
                    TreeNode *t=q.front();
                    v.push_back(t->val);
                    q.pop();    
                    if(t->left)
                        q.push(t->left);
                    if(t->right)
                        q.push(t->right);
                }
                double sum=0;
                for(int i=0;i<v.size();i++)
                    sum+=v[i];
                sum=(double)(sum/v.size());
                res.push_back(sum);                
            }
            return res;
        }
        return {};
    }
};
