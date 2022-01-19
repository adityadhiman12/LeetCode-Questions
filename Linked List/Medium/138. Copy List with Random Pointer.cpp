/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return NULL;
        Node* originalHead=head;
        while(originalHead)
        {
            Node *copyHead=new Node(originalHead->val);
            copyHead->next=originalHead->next;
            originalHead->next=copyHead;
            originalHead=copyHead->next;
        }
        originalHead=head;
        while(originalHead)
        {
            if(originalHead->random)
            {
                originalHead->next->random=originalHead->random->next;
            }
            originalHead=originalHead->next->next;
        }
        Node* copyHead=head->next;
        Node* copyHead2=head->next;
        originalHead=head;   
        while(originalHead && copyHead2)
        {
            Node *originalNext=copyHead2->next;
            originalHead->next=originalNext;
            if(originalNext)
            {
                copyHead2->next=originalNext->next;
            }
            originalHead=originalHead->next;
            copyHead2=copyHead2->next;
        }
        return copyHead;
    }
};
