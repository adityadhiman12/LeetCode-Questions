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
    
    int minDepth(TreeNode* root) {
        if(root)
        {
            queue<TreeNode*>q;
            q.push(root);
            int res=0;
            while(!q.empty())
            {
                res++;
                int n=q.size();
                for(int i=0;i<n;i++)
                {
                    TreeNode *t=q.front();
                    q.pop();

                    if(!t->left && !t->right)
                    {
                        return res;
                    }
                    if(t->left)
                    {
                        q.push(t->left);
                    }
                    if(t->right)
                    {
                        q.push(t->right);
                    }
                }
            }    
        }
        return 0;
    }
};
