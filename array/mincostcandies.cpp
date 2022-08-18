#include <bits/stdc++.h>
using namespace std;
int sum(vector<int> &cost)
{
    sort(cost.begin(), cost.end());
    int n = cost.size();
    int res = 0;
    int t = n - 1;
    while (t > 1)
    {
        res += cost[t] + cost[t - 1];
        t = t - 3;
    }
    return res;
}
int minimumCost(vector<int> &cost)
{

    int n = cost.size();
    int res = 0;
    if (n % 3 == 0)
        res = sum(cost);

    if (n % 3 == 1)
        res = sum(cost) + cost[0];
        
    if (n % 3 == 2)
        res = sum(cost) + cost[0] + cost[1];

    return res;
}

int main()
{
    vector<int> cost = {6, 5, 7, 9, 2, 2};
    cout << minimumCost(cost);
}