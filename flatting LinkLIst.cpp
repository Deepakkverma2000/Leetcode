 Node* merge(Node* p,Node * q)
    {
        Node* temp=new Node(0);
        Node* cur=temp;
        while(p!=NULL and q!=NULL)
        {
            if(p->data<=q->data)
            {
                cur->bottom=p;
                cur=cur->bottom;
                p=p->bottom;
            }
            else{
                cur->bottom=q;
                cur=cur->bottom;
                q=q->bottom;
            }
        }
        if(p!=NULL)
        {
          while(p!=NULL)
          {
            cur->bottom=p;
                cur=cur->bottom;
                p=p->bottom;  
          }
        }
        if(q!=NULL)
        {
           while(q!=NULL)
           {
             cur->bottom=q;
                cur=cur->bottom;
                q=q->bottom;   
           }
        }
        return temp->bottom;
    }
Node *flatten(Node *root)
{
   if(root==NULL or root->next==NULL or root->next==NULL)
   {
       return root;
   }
   Node *newNode=flatten(root->next);
   Node* q=newNode;
   Node* p=root;
  
  Node* temp=merge(p,q);
  
  return temp;
  
}

