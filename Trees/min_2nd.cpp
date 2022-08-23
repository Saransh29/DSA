#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data)
    {
        this->data = data;
    }
};

class mmm
{
public:
    int max;
    int smax;

    mmm()
    {
        max = NULL;
        smax = NULL;
    }
};

TreeNode<int> *takeinput()
{
    int rootdata;
    cout << "enter root data" << endl;
    cin >> rootdata;
    TreeNode<int> *root = new TreeNode<int>(rootdata);
    queue<TreeNode<int> *> pendingnodes;

    pendingnodes.push(root);

    while (pendingnodes.size() != 0)
    {
        TreeNode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        int num;
        cout << "enter no. of children of " << front->data << endl;
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            int childdata;
            cout << "enter child " << i << " th data"
                 << "of" << front->data << endl;
            cin >> childdata;
            TreeNode<int> *child = new TreeNode<int>(childdata);
            front->children.push_back(child);
            pendingnodes.push(child);
        }
    }
    return root;
}

void printbylvl(TreeNode<int> *root)
{

    queue<TreeNode<int> *> pendingnodes;
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        TreeNode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        cout << front->data << ":";
        for (int i = 0; i < front->children.size(); i++)
        {
            cout << front->children[i]->data << ",";
            pendingnodes.push(front->children[i]);
        }
        cout << endl;
    }
}

mmm func(TreeNode<int> *root)
{
    mmm ans;
    ans.max = root->data;

    for (int i = 0; i < root->children.size(); i++)
    {
        mmm temp = func(root->children[i]);
        if (temp.max > ans.max)
        {
            int greatest = temp.max;
            int smaller;
            if (temp.smax == NULL)
            {
                smaller = ans.max;
            }
            else
            {
                if (temp.smax > ans.max)
                {
                    smaller = temp.smax;
                }
                else
                {
                    smaller = ans.max;
                }
            }

            ans.max = greatest;
            ans.smax = smaller;
        }
        else
        {
            int greatest = ans.max;
            int smaller;
            if (ans.max == temp.max)
            {
                smaller = ans.smax;
                ans.max = greatest;
                ans.smax = smaller;
                return ans;
            }
            if (ans.smax = NULL)
            {
                smaller = temp.max;
            }
            else
            {
                if (temp.max > ans.smax)
                {
                    smaller = temp.max;
                }
                else
                {
                    smaller = ans.smax;
                }
            }
            ans.max = greatest;
            ans.smax = smaller;
        }
    }

    return ans;
}
int main()
{
    TreeNode<int> *root = takeinput();
    mmm y = func(root);
    cout << "largest is " << y.max;
    cout << "second largest is " << y.smax;
}