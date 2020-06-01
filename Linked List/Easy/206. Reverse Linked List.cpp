class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode *pre=NULL;
        ListNode *nextN=NULL;
        ListNode *cur=head;
        while(cur!=NULL)
        {
            nextN=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nextN;
        }
        head=pre;
        return head;
    }
};
