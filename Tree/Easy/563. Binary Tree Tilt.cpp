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

    int post(TreeNode *root,int &sum)
    {
        if(root)
        {
            int left=post(root->left,sum);
            int right=post(root->right,sum);
            sum+=abs(left-right);
            return left+right+root->val;
        }
        return 0;
    }
    
    int findTilt(TreeNode* root) {
        if(root)
        {
            int sum=0;
            post(root,sum);
            return sum;    
        }
        return 0;
    }
};
