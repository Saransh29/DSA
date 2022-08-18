#include <bits/stdc++.h>
using namespace std;

int minimumSplits(vector<int> stage, vector<int> Type)
{
    priority_queue<int> pq;
    int n = stage.size();
    int cnt = 0;
    int curr = 1;
    for (int i = 0; i < n; i++)
    {
        if (Type[i] == 1)
            pq.push(stage[i]);
        else
        {
            while (!pq.empty() && curr <= stage[i])
            {
                curr += pq.top() - 1;
                pq.pop();
                cnt++;
            }
            if (curr <= stage[i])
                return -1;
        }
    }
    return cnt;
}

int main()
{
    vector<int> stage = {3, 2};
    vector<int> type = {1, 2};
    cout << minimumSplits(stage, type);
}