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
    
    int add(int len1, int len2, ListNode*l1, ListNode*l2, ListNode*& sumHead)
    {
        if(len1==0 && len2==0)
            return 0;
        int num1=0, num2=0, carry;
        if(len1>len2)
        {
            carry=add(len1-1, len2, l1->next, l2, sumHead);
            num1=l1->val;
        }
        else if(len1<len2)
        {
            carry=add(len1, len2-1, l1, l2->next, sumHead);
            num2=l2->val;
        }
        else 
        {
            carry=add(len1-1, len2-1, l1->next, l2->next, sumHead);
            num1=l1->val;
            num2=l2->val;
        }
        int sum=num1+num2+carry;
        ListNode* temp=new ListNode(sum%10);
        temp->next=sumHead;
        sumHead=temp;
        return sum/10;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int len1=0, len2=0;
        ListNode* sumHead=NULL;
        ListNode* head1=l1;
        ListNode* head2=l2;
        while(head1)
        {
            len1++;
            head1=head1->next;
        }
        while(head2)
        {
            len2++;
            head2=head2->next;
        }
        int carry=add(len1, len2, l1, l2, sumHead);
        if(carry)
        {
            ListNode* temp=new ListNode(carry%10);
            temp->next=sumHead;
            sumHead=temp;
        }
        return sumHead;
    }
};
