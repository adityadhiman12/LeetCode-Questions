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
    
    void merge(TreeNode* t1,TreeNode* t2, TreeNode* &(temp))
    {
        if(t1 && t2)
        {
            if(!temp)
                temp=new TreeNode(t1->val+t2->val);
            else
                temp->val=(t1->val+t2->val);
            merge(t1->left,t2->left,temp->left);
            merge(t1->right,t2->right,temp->right);
        }
        else if(t1 && !t2)
        {
            temp=t1;
            return;
        }
        else if(t2 && !t1)
        {
            temp=t2;
            return;
        }
    }
    
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(!t1 && !t2)
            return NULL;
        else if(t1 && !t2)
            return t1;
        else if(t2 && !t1)
            return t2;
        TreeNode* temp=new TreeNode();
        merge(t1,t2,temp);
        return temp;
    }
};
