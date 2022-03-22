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
    struct BSTNode
    {
        bool isBST;
        int minn;
        int maxx;
        int sum;
    };
    
    BSTNode findMax(TreeNode *root,int &res)
    {
        if(root)
        {
            BSTNode left = findMax(root->left,res);
            BSTNode right = findMax(root->right,res);
            bool isBST = (left.isBST && right.isBST && left.maxx < root->val && root->val < right.minn);
            int sum = root->val+left.sum+right.sum;
            if(isBST)
                res = max(res,sum);
            return {isBST,min(root->val,left.minn),max(root->val,right.maxx),sum};
        }
        else
            return {true,INT_MAX,INT_MIN,0};
    }
    
    int maxSumBST(TreeNode* root) {
        int res = 0;
        findMax(root,res);
        return res;
    }
};
