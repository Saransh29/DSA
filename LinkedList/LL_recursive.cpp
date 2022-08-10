#include<iostream>
#include"node.cpp"
using namespace std;


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

void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}
int  length(Node *head)
{
    if(head==NULL)
        return 0;
    int smalllength = length(head->next);
        return 1 + smalllength;
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
Node* insert_ith(Node *head, int i,int data)
{
    
    Node *newNode = new Node(data);
	int count = 0;
	Node *temp = head;

    if(i<0 || head==NULL)
        return head;
	if(i == 0) {
        Node *newNode = new Node(data);
		newNode -> next = head;
		head = newNode;
		return head;
	}
    if(i == 1) {
        Node *newNode = new Node(data);
		newNode -> next = head->next;
		head->next = newNode;
		return head;
	}
    else 
    {
        Node *temp = insert_ith(head->next,i-1,data);
    }

	return head;
  
}
Node* delete_ith(Node *head, int i)
{
    
    int count =0;

    if(i<0 || head==NULL){
        return head;
    }
    if(i==0){
        Node *temp=head->next;
        delete temp;
        return head;
    }
    if(i==1 && head->next!=NULL)
    {
        Node* a=head->next ;
        Node* b=a->next ;
        head->next=b ;
        delete a ;
        return head ;
    }
    else
    {
        Node *temp=delete_ith(head->next,i-1);
        return head;
    }    
    

    /*
    newnode->next = temp -> next;
    temp-> next = newnode;
    */
}

int main() {

	Node *head = takeinput_better();
	
    int i,data;
    cin>>i>>data;

    cout<<"length = "<<length(head)<<endl;

    head=insert_ith(head,i,data);
    print(head); 
    
    cout<<endl;

    cout<<"Enter index to delete :";
    int index;
    cin>>index;
    head=delete_ith(head,index);

    print(head); 
    /*
    int i;
    cin>>i;

    head=delete_ith(head,i);

    print(head); 
     
     
    /*


    int i,data;
    cin>>i>>data;

    head=insert_ith(head,i,data);

    print(head);

   
    int pos;
    cin>>pos;
    print_ith(head,pos);
    cout<<endl;


    print(head);
    cout<<endl;
    cout<<"Lenght"<<length(head);
    */
		
    return 0;
}