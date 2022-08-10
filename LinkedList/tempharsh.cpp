#include <iostream>
using namespace std;

class LL
{
public:
    int data;
    LL *next;

    LL(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print1(LL *head)
{
    LL *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int size(LL *head)
{
    int s = 0;
    LL *temp = head;
    while (temp != NULL)
    {
        s++;
        temp = temp->next;
    }
    return s;
}
LL *input1()
{
    int data;
    cin >> data;
    LL *head = NULL;
    LL *tail = NULL;
    while (data != -1)
    {
        LL *newnode = new LL(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

LL *ithNode(LL *head, int n)
{
    int i = 0;
    LL *temp = head;
    while (temp != head)
    {
        i++;
        if ((i - 1) == n)
        {
            return temp;
        }
        temp = temp->next;
    }
}

int main()
{
    cout << "Hello" << endl;
    LL *head = input1();
    // print1(head);
    int x = size(head);
    int n;
    cout << "enter index you wanna find out" << endl;
    cin >> n;
    if (n > (x - 1))
    {
        cout << "ghu kha le";
    }
    else
    {
        LL *X = ithNode(head, n);
        cout << X->data;
    }
}