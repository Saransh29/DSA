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
vector<int> preOrder(Node *root)
{
    vector<int> res;
    if (!root)
        return res;

    stack<Node *> s;
    s.push(root);

    while (!s.empty())
    {
        Node *temp = s.top();
        s.pop();
        res.push_back(temp->data);
        if (temp->right)
            s.push(temp->right);
        if (temp->left)
            s.push(temp->left);
    }
    return res;
}
vector<int> Inorder(Node *root)
{
    vector<int> res;
    if (!root)
        return res;

    stack<Node *> s;
    Node *temp = root;
    while (temp || !s.empty())
    {
        while (temp)
        {
            s.push(temp);
            temp = temp->left;
        }
        temp = s.top();
        s.pop();
        res.push_back(temp->data);
        temp = temp->right;
    }
    return res;
}
vector<int> postorder(Node *root)
{
    // O(N log N)
    vector<int> res;
    if (!root)
        return res;

    stack<Node *> s;
    s.push(root);

    while (!s.empty())
    {
        Node *temp = s.top();
        s.pop();
        res.push_back(temp->data);
        if (temp->left)
            s.push(temp->left);
        if (temp->right)
            s.push(temp->right);
    }
    reverse(res.begin(), res.end());
    return res;
}
vector<int> post_order_2stack(Node *root)
{
    vector<int> res;
    if (!root)
        return res;

    stack<Node *> st1, st2;
    st1.push(root);

    while (!st1.empty())
    {
        root = st1.top();
        st1.pop();
        st2.push(root);

        if (root->left)
            st1.push(root->left);
        if (root->right)
            st1.push(root->right);
    }
    while (!st2.empty())
    {
        res.push_back(st2.top()->data);
        st2.pop();
    }
    return res;
}
vector<int> post_order_1stack(Node *root)
{
    // O(N)
    vector<int> res;
    if (!root)
        return res;

    stack<Node *> s;

    s.push(root);

    Node *curr = root;
    Node *temp;

    while (curr || !s.empty())
    {
        if (curr)
        {
            s.push(curr);
            curr = curr->left;
        }
        else
        {
            temp = s.top()->right;
            if (!temp)
            {
                temp = s.top();
                s.pop();
                res.push_back(temp->data);
                while (!s.empty() && temp == s.top()->right)
                {
                    temp = s.top();
                    s.pop();
                    res.push_back(temp->data);
                }
            }
            else
                curr = temp;
        }
    }
    return res;
}
vector<int> postorderTraversal(Node *root)
{
    // we keep a stack of pair{node,bool}
    // if bool is true we can safely print that node
    // if bool is false then we make it true and push children in stack
    // remember to push right first and left later as it is stack

    if (root == NULL)
        return {};
    vector<int> result;

    stack<pair<Node *, bool>> st;

    st.push({root, false});

    while (st.size())
    {
        auto node = st.top().first;
        auto visited = st.top().second;
        st.pop();

        // if visited is true it means its children explored
        if (visited)
        {
            result.push_back(node->data);
        }
        else
        {
            // now we visit this node
            st.push({node, true});

            // now we push right first and left later so that left is on top
            // now when left and right gone we will see node in stack ,
            // we mark it visited so we will put in result
            // so visited for any node will be true only when its left and right subtree will be executed
            if (node->right != NULL)
                st.push({node->right, false});
            if (node->left != NULL)
                st.push({node->left, false});
        }
    }
    return result;
}
void pre(Node *root, vector<int> &temp1)
{
    if (root == NULL)
        return;
    temp1.push_back(root->data);
    pre(root->left, temp1);
    pre(root->right, temp1);
}
void post(Node *root, vector<int> &temp2)
{
    if (root == NULL)
        return;
    post(root->left, temp2);
    post(root->right, temp2);
    temp2.push_back(root->data);
}
void in(Node *root, vector<int> &temp3)
{
    if (root == NULL)
        return;
    in(root->left, temp3);
    temp3.push_back(root->data);
    in(root->right, temp3);
}
void solver(Node *root, vector<int> &temp1, vector<int> &temp2, vector<int> &temp3)
{
    if (!root)
        return;
    pre(root, temp1);
    post(root, temp2);
    in(root, temp3);
}
void allinone(Node *root, vector<int> &temp1, vector<int> &temp2, vector<int> &temp3)
{
    if (!root)
        return;

    stack<pair<Node *, string>> st;
    st.push({root, "preOrder"});

    while (!st.empty())
    {
        auto it = st.top();
        st.pop();

        if (it.second == "preOrder")
        {
            temp1.push_back(it.first->data);
            it.second = "inOrder";
            st.push(it);

            if (it.first->left != NULL)
            {
                st.push({it.first->left, "preOrder"});
            }
        }
        else if (it.second == "inOrder")
        {
            temp3.push_back(it.first->data); // inorder
            it.second = "postOrder";
            st.push(it);
            if (it.first->right != NULL)
            {
                st.push({it.first->right, "preOrder"});
            }
        }
        else
        {
            temp2.push_back(it.first->data); // postorder
        }
    }
}                                               //pre               //post              //in
void allinone_recursion(Node *root, vector<int> &temp1, vector<int> &temp2, vector<int> &temp3)
{
    if (!root)
        return;
    temp1.push_back(root->data);

    allinone_recursion(root->left, temp1, temp2, temp3);
    temp3.push_back(root->data);
    allinone_recursion(root->right, temp1, temp2, temp3);
    temp2.push_back(root->data);
}
int main()
{

    /*
          1
        /   \
       2     3
      / \   / \
     4   5 6   7

    */
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // cout << "Preorder: ";
    // vector<int> res1 = preOrder(root);
    // for (int i = 0; i < res1.size(); i++)
    //     cout << res1[i] << " ";
    // cout << endl;

    // cout << "Inorder: ";
    // vector<int> res2 = Inorder(root);
    // for (int i = 0; i < res2.size(); i++)
    //     cout << res2[i] << " ";
    // cout << endl;

    // cout << "Postorder: ";
    // vector<int> res3 = postorderTraversal(root);
    // for (int i = 0; i < res3.size(); i++)
    //     cout << res3[i] << " ";
    // cout << endl;
    vector<int> temp1, temp2, temp3;
    allinone_recursion(root, temp1, temp2, temp3);

    cout << "Preorder: ";
    for (int i = 0; i < temp1.size(); i++)
        cout << temp1[i] << " ";
    cout << endl;
    cout << "PostOrder: ";
    for (int i = 0; i < temp2.size(); i++)
        cout << temp2[i] << " ";
    cout << endl;
    cout << "Inorder: ";
    for (int i = 0; i < temp3.size(); i++)
        cout << temp3[i] << " ";
    cout << endl;
}