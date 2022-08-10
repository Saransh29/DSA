#include <iostream>
#include "node.cpp"
using namespace std;

Node *takeinput_better()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1)
    {
        Node *newnode = new Node(data);
        // Node newnode(data); if we use this then we have to change to head = &newnode; everywhere
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else //head null nhi h to tail p add krte h
        {
            tail->next = newnode;
            tail = tail->next;

            // OR

            // tail = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int length(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void print_ith(Node *head, int n)
{
    Node *temp=head;

    //first calculate length
    int len=0;
    while(temp != NULL)
    {
    	len++;
    	temp = temp -> next;
    }
    //if trying to print location greater than length return nothing
    if(i>=len)
        return;

    temp=head; // length nikaalk dobara starting se set krdia
    //now iterate to ith location
    for(int j=0;j<i;j++)
    {
        temp=temp->next;
    }
    cout<<temp->data<<endl;

    //alternate method


    // int i = 0;
    // Node *temp = head;
    // while (temp != NULL)
    // {
    //     i++;
    //     if ((i - 1) == n)
    //     {
    //         cout << temp->data << endl;
    //     }
    //     temp = temp->next;
    // }
    // cout << temp->data << endl;
}
Node *insert_ith(Node *head, int i, int data)
{

    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;

    if (i == 0)
    {   //newnode k next m head ka address
        //head m newnode ka address and data
        newNode->next = head;
        head = newNode;
        //OR
        //head->next = newnode;
        //head = head->next;
        return head;
    }
    // ith tak traverese krdega
    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp != NULL)
    {
        Node *a = temp->next; // a m temp ka address
        temp->next = newNode; //temp k address m newnode 
        newNode->next = a; // newnode k address m a
    }

    return head;

    /*
    newnode->next = temp -> next;
    temp-> next = newnode;
    */
}
Node *delete_ith(Node *head, int i)
{

    int count = 0;
    Node *temp = head;

    if (i < 0 || head == NULL)
    {
        return head;
    }
    if (i == 0)
    {
        head = head->next;
        delete temp;
        return head;
    }

    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp == NULL || temp->next == NULL)
    {
        return head;
    }

    Node *a = temp->next;
    Node *b = a->next;
    temp->next = b;
    delete a;
    return head;

    /*
    newnode->next = temp -> next;
    temp-> next = newnode;
    */
}

int main()
{

    Node *head = takeinput_better();

    int i;
    cin >> i;

    // head = delete_ith(head, i);

    // print(head);

    print_ith(head, i);
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