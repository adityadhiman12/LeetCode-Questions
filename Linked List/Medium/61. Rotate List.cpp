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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* temp=head;
        int len=1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            len++;
        }
         // close the list (create a ring)
        temp->next=head;
        temp=head;
        // find one element before the new head
        for(int i=0;i<(len-(k%len)-1);i++)
        {
            temp=temp->next;
        }
        head=temp->next;
        // open the list (break the ring)
        temp->next=NULL;
        return head;
    }
};
