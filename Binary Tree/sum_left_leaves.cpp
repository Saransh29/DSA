#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node * left;
    struct Node * right;
    Node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};
int sumOfLeftLeaves(Node* root) {
        
        if(!root)return 0;
        queue<Node*>q;
        q.push(root);
        int sum=0;
        while(!q.empty())
        {
            int n = q.size();        
            for(int i=0;i<n;i++)
            {
                Node* temp = q.front();
                q.pop();         
                if(temp->left)
                {
                    q.push(temp->left);
                    sum+= temp->data;
                }
                if(temp->right)q.push(temp->right);

            }
        }
        return sum;
       
    }

int main()
{
    struct Node * root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->right= new Node(4);
    cout<<sumOfLeftLeaves(root);
}