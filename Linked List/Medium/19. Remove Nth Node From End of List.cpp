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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* countNode=head;
        int count=0;
        while(countNode)
        {
            count++;
            countNode=countNode->next;
        }
        int find=count-n;
        int i=0;
        ListNode* pre=NULL;
        ListNode* temp=head;
        if(find==0)
            return temp->next;
        while(temp)
        {
            if(i==find)
            {
                pre->next=temp->next;
                break;
            }
            i++;
            pre=temp;
            temp=temp->next;
        }
        return head;
    }
};
