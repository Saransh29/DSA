#include<iostream>
using namespace std;

template<typename T>
class Node{
    public:
    int data;       //data object
    Node<T> * next;    // Node ka address object
    
    Node (T data)  //constructor
    {
     this -> data = data;
     next = NULL;

    }
};

template<typename T>
class Stack
{

    Node<T>*head;
    int size;

    public:

    Stack()
    {
        head=NULL;
        size=0;
    }
    int getSize() {
        return size;
		
	}

	bool isEmpty() {
       return head==NULL;

	}

	void push(T element) {
        Node<T> *newnode = new Node<T>(element);
        if(head==NULL)
        {
            head=newnode;
            size++;
        }
        else
            newnode->next=head;
            head=newnode;
            size++;

	}

	T pop() {
        if(head==NULL)
        {
            return 0;
        }
        Node<T> *b = head;
        head=head->next;
        T ans =b->data;
        delete b;
        size--;
        return ans;
	}

	T top() {
        if(head==NULL)
        {
            return 0;
        }
        return head->data;
	}

};
int main()
{
    Stack<char> s;
    s.push(100);
    s.push(111);
    s.push(221);
    s.push(22);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;  
    cout<<s.pop()<<endl;

}