node* eliminate_duplicate(node* head)
{
    //write your code here
    node* a=head ;
    node* b=head->next ;
    while(a!=NULL && b!=NULL)
    {
        if(a->data==b->data)
        {
            node* c=b->next ;
            a->next=c ;
            delete b ;
            b=c ;  
        }
        else
        { a=b ;
          b=a->next ;
        }
    }
    return head ;
}
