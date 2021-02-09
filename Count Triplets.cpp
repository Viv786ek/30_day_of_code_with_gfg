
//User function Template for C++

int countTriplets(struct Node* head, int key) 
{ 
    bool a[10001]={false};
    Node *ptr=head;
    
    while(ptr!=NULL)
    {
        a[ptr->data]=true;
        ptr=ptr->next;
    }
    
    int count=0;
    for(ptr=head;ptr->next!=NULL;ptr=ptr->next)
    {
        for(Node *ptr1=ptr->next;ptr1!=NULL;ptr1=ptr1->next)
        {
            int x=ptr->data;
            int y=ptr1->data;
            if(x+y>=key)
            continue;
            int diff=key-(x+y);
            if(diff>x && diff>y && a[diff])
            ++count;
        }
    }
    return count;
} 
