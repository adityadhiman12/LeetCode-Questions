/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    void pre(Node *root,vector<int>&res)
    {
        if(root)
        {
            res.push_back(root->val);
            if(root->children.size())
            {
                for(auto i:root->children)
                {
                    pre(i,res);
                }
            }
        }
    }
    
    vector<int> preorder(Node* root) {
        if(!root)
            return {};
        vector<int>res;
        pre(root,res);
        return res;
    }
};
