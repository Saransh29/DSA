#include<iostream>
//#include"node.cpp" 

using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node (int data)
    {
     this -> data = data;
     next = NULL;

    }
};

void print(Node *head)
{   
    Node *temp=head;
    //temo is used so that original head address is not lost

    while(temp != NULL)
    {   
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    //statistically
    Node n1(1);

    Node *head =&n1;

    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;

    print(head);

    print(head);

	/* Dynamically
	Node *n3 = new Node(10);
	Node *head = n3;
	
	Node *n4 = new Node(20);
	n3 -> next = n4;

	*/
}