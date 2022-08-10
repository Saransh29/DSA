#include <bits/stdc++.h>
using namespace std;

void firstnegative(vector<int> vec, int k, vector<int> res)
{
    int n = vec.size();
    int window_start = 0;

    queue<int> q;

    for (int window_end = 0; window_end < n; window_end++)
    {
        if (vec[window_end] < 0)
        {
            q.push(vec[window_end]);
            if (q.size() != 0)
            {
                res.push_back(q.front());
                q.pop();
            }
            if (q.size() == 0)
            {
                res.push_back(0);
            }
        }
    }
}
int main()
{
    vector<int> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    vector<int> ans;

    int k;
    cin >> k;
    firstnegative(vec, k, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}