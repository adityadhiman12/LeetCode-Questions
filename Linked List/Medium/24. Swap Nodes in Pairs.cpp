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
    ListNode* swapPairs(ListNode* head) {
     if(head==NULL || head->next==NULL)
         return head;
     ListNode *h1=head;
     ListNode *h2=h1->next;
     ListNode *temp=h1;
     h1=h2;
     h2=temp;
     ListNode *connect=swapPairs(head->next->next);
        h1->next=h2;
        h2->next=connect;
        return h1;
            
        
    }
};
