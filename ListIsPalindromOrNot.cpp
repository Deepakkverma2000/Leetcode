class Solution {
public:
    ListNode* reverselist(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* cur;
        while(head)
        {
            cur=head->next;
            head->next=prev;
            prev=head;
            head=cur;
            
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* p=reverselist(slow);
        fast=head;
        while(p!=NULL)
        {
            if(fast->val!=p->val)
                return false;
            fast=fast->next;
            p=p->next;
        }
        return true;
    }
};