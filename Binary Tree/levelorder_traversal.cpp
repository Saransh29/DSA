#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;

    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
vector<int> levelOrder(Node *root)
{
    vector<int> res;
    if (!root)
        return res;

    queue<Node *> q;
    q.push(root);
    
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        res.push_back(temp->data);
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    return res;
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> res = levelOrder(root);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;
}