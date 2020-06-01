class Solution {
public:
    int getDecimalValue(ListNode* head) {
        if (head==NULL)
            return 0;
        ListNode *cur=head;
        vector<int>a;
        while(cur!=NULL)
        {
            a.push_back(cur->val);
            cur=cur->next;
        }
        int j=0;
        int num=0;
        for(int i=a.size()-1;i>=0;i--)
        {
            num+=(a[i]*pow(2,j));
            j++;
        }
        return num;        
    }
};
