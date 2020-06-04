/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    ListNode* current = head;  
    ListNode* nextN;  
    if (current == NULL)  
        return NULL;  
    while (current->next != NULL)  
    {  
        if (current->val == current->next->val)  
        {  
            nextN = current->next->next;  
            delete(current->next);  
            current->next = nextN;  
        }  
        else 
        {  
            current = current->next;  
        }   
    }
        return head;
    }
};
