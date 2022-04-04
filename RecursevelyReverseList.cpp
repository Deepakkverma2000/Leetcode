 ListNode* reverseList(ListNode* head) {
       if(head==NULL or head->next==NULL)
       {
           return head;
       }
        ListNode* newNode=reverseList(head->next);
        ListNode* p=head->next;
        p->next=head;
        head->next=NULL;
        return newNode;
    }
};