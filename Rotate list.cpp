class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        int n=0;
        while(temp)
        {
            n++;
            temp=temp->next;
        }
        if(n==0 or n==1)
            return head; 
        k=k%(n);
        for(long long i=1;i<=k;i++)
        {
        temp=head;
            int j=1;
            while(j<n-1)
            {
                temp=temp->next;
                j++;
            }
            ListNode* p=temp->next;
            p->next=head;
            head=p;
            temp->next=NULL;
            
        }
          return head;
    }
  
};