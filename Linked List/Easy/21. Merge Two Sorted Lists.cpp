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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *final=NULL;
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        ListNode *head=NULL;
        if(l1->val<=l2->val )
            head=final=l1,l1=l1->next;
        else
            head=final=l2,l2=l2->next;
        while(l1!=NULL && l2 !=NULL)
        {            
            if(l1->val<=l2->val )
            {
                final->next=l1;
                final=l1;
                l1=l1->next;                    
            }                
            else
            {
                final->next=l2;
                final=l2;
                l2=l2->next;   
            }
        }
        if(!l1)
            final->next=l2;
        else
            final->next=l1;

        return head;            
    }
};
