#include <bits/stdc++.h>
using namespace std;

vector<string> findRelativeRanks(vector<int> &score)
{
    int n = score.size();

    priority_queue<pair<int, int>> pq;
    vector<string> res(n);

    for (int i = 0; i < n; i++)
    {
        pq.push({score[i], i});
    }
    int k = 1;
    while (k < 4)
    {
        if (k == 1 && !pq.empty())
        {
            res[pq.top().second] = "Gold Medal";
            pq.pop();
        }
        if (k == 2 && !pq.empty())
        {

            res[pq.top().second] = "Silver Medal";
            pq.pop();
        }

        if (k == 3 && !pq.empty())
        {
            res[pq.top().second] = "Bronze Medal";
            pq.pop();
        }
        k++;
    }
    cout << "\n";
    cout << pq.top().second << endl;
    while (!pq.empty())
    {
        res[pq.top().second] = to_string(k);
        pq.pop();
        k++;
    }
    return res;
}

vector<string> ranks_clean(vector<int> &score)
{
    int n = score.size();

    priority_queue<pair<int, int>> pq;
    vector<string> res(n);

    for (int i = 0; i < n; i++)
    {
        pq.push({score[i], i});
    }
    int k = 0;

    while (!pq.empty())
    {
        // if (k == 0)
        //     res[pq.top().second] = "Gold Medal";
        // else if (k == 1)
        //     res[pq.top().second] = "Silver Medal";
        // else if (k == 2)
        //     res[pq.top().second] = "Bronze Medal";
        // else
        //     res[pq.top().second] = to_string(k + 1);
        // pq.pop();
        // k++;

        res[pq.top().second] = k == 0 ? "Gold Medal" : k == 1 ? "Silver Medal"
                                                   : k == 2   ? "Bronze Medal"
                                                              : to_string(k + 1);
        pq.pop();
        k++;
    }
    return res;
}

int main()
{
    vector<int> score = {5, 4, 3, 2, 1};
    vector<string> res = ranks_clean(score);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}