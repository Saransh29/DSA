#include<iostream>
using namespace std;
#include"node.cpp"

Node* takeinput_better()
{
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;

    while(data!=-1)
    {
       Node *newnode = new Node(data);
       if(head==NULL)
       {
           head=newnode;
           tail=newnode;

       }
       else
       {
           tail->next=newnode;
           tail=tail->next;

           // OR tail=newnode;
       }
       cin>>data;
    }
    return head;
}
void print(Node *head)
{
    while(head!=NULL)
    {
        head=head->next;
        cout<<head->data;
    }
}

Node *print_mid(Node *head )
{
    Node *slow=head;
    Node *fast =head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
void print_ith(Node *head,int i)
{
    Node *temp=head;
    int len=0; 
	while(temp != NULL)
    {
		len++;
		temp = temp -> next;
	}
    
    if(i>=len)
        return;

    temp=head; // length nikaalk dobara starting se set krdia
    
    for(int j=0;j<i;j++)
    {
        temp=temp->next;
    }
    cout<<temp->data<<endl;
    
    
}
int length(Node *head)
{
    int len=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}
int main()
{
    Node *head = takeinput_better();

    print_mid(head);
    /*
    int len;
    len=length(head);
    if(len%2==0)
    {
        print_ith(head,(len/2));
        cout<<endl;
        print_ith(head,((len-1)/2));
        cout<<endl;


    }
    else
    {
        print_ith(head,((len-1)/2));
        cout<<endl;
    }*/
}


