#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pp;
// comparator for sorting in ascending order by freq ,
//  if freq same then sort in descending order

struct cmp
{
    bool operator()(pp x, pp y)
    {
        // freq comparison
        if (x.first < y.first) // for increasing order
            return false;

        else if (x.first > y.first) // for increasing order
            return true;

        else // if freq same
        {
            return (x.second < y.second);
            // seedha compare
            // for descending order
        }
    }
};
struct cmp2
{
    bool operator()(pp a, pp b)
    {         //if freq same then sort in descending order
        return (a.first == b.first) ? a.second < b.second : a.first > b.first;
    }                                                   //else sort in ascending order
};
vector<int> frequencySort(vector<int> &nums)
{

    unordered_map<int, int> mp;

    priority_queue<pp, vector<pp>, cmp2> pq;

    for (auto it : nums)
        mp[it]++;

    for (auto it : mp)
        pq.push({it.second, it.first});

    vector<int> res;

    while (!pq.empty())
    {
        int t = pq.top().first;
        while (t--)
            res.push_back(pq.top().second);
        pq.pop();
    }
    return res;
}
int main()
{
    vector<int> nums = {1, 1, 2, 2, 2, 3};
    vector<int> res = frequencySort(nums);
    for (auto it : res)
        cout << it << " ";
    cout << endl;
    return 0;
}
