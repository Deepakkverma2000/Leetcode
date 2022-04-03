class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode(0);
        ListNode* p=l1;
        ListNode* q=l2;
        ListNode* cur=ans;
        int carry=0;
        while(p!=NULL or q!=NULL)
        {
            int a= (p!=NULL)?(p->val):0;
            int b= (q!=NULL)?(q->val):0;
            int sum=carry+a+b;
            carry=sum/10;
            cur->next=new ListNode(sum%10);
            cur=cur->next;
            if(p!=NULL)
                p=p->next;
            if(q!=NULL)
                q=q->next;
        }
        if(carry>0)
        {
            cur->next=new ListNode(carry);
        }
        return ans->next;
    }
};