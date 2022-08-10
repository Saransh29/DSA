#include<iostream>
#include<bt.h>
using namespace std;



int main()
{


    struct Node * root= new Node(1);
    
    root->left= new Node(2);
    root->right= new Node(3);

    root->left->right= new Node(4);
    

}