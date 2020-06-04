/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1=headA;
        ListNode *temp2=headB;
        int c1=0;
        int c2=0;
        while(temp1!=NULL)
        {
            temp1=temp1->next;
            c1++;
        }
        while(temp2!=NULL)
        {
            temp2=temp2->next;
            c2++;
        }
        // cout<<c1<<c2;
        int d=abs(c1-c2);
        temp1=headA;
        temp2=headB;
        ListNode *final=NULL;
        if(c1>c2)
        {
            int i=0;
            while(i!=d)
            {
                temp1=temp1->next;
                i++;
            }
            while(temp1!=NULL && temp2!=NULL)
            {
                if(temp1==temp2)
                {
                    final=temp1;
                    break;
                }
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        else
        {
            int i=0;
            while(i!=d)
            {
                temp2=temp2->next;
                i++;
            }
            while(temp1!=NULL && temp2!=NULL)
            {
                if(temp1==temp2)
                {
                    final=temp1;
                    break;
                }
                temp1=temp1->next;
                temp2=temp2->next;                    
            }
        }
        return final;
    }
};
