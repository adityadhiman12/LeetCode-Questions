class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *cur1=head;
        ListNode *cur2=head;
        while(cur1 && cur1->next)
        {
            cur1=cur1->next->next;
            cur2=cur2->next;
        }
        return cur2;
        
    }
};
