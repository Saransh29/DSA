#include <bits/stdc++.h>
using namespace std;

void min_2(stack<int> &st)
{
    int mini = INT_MAX;
    int mini_2 = INT_MAX;
    while (!st.empty())
    {
        int x = st.top();
        st.pop();

        if (x < mini)
        {
            mini_2 = mini;
            mini = x;
        }
        else if (x < mini_2)
            mini_2 = x;
    }
    cout << mini << " " << mini_2 << endl;
}


int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(5);
    st.push(0);
    st.push(3);
    st.push(4);

    min_2(st);
    // approach 1 -> put all the stack elements in a vector and sort and get 1st and 2nd element

    // approach 2-> put all the stack element in a pq(min heap) and get 1st and 2nd element
}