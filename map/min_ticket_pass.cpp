#include <bits/stdc++.h>
using namespace std;
int mincostTickets(vector<int> &days, vector<int> &costs)
{

    unordered_map<int, int> tickets;
    tickets[1] = costs[0];
    tickets[7] = costs[1];
    tickets[30] = costs[2];

    vector<int> dp(366, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i < 366; ++i)
    {
        if (find(days.begin(), days.end(), i) == days.end())
        // if day i not found then cost = last cost
        {
            dp[i] = dp[i - 1];
            continue;
        }
        // if found iterate in tickets map
        for (auto ticket : tickets)
        {
            dp[i] = min(dp[i], dp[max(0, i - ticket.first)] + ticket.second);
        }
        // dp[max(0, i - ticket.first)] written to avoid negative index
        // dp[i] = min(dp[i],dp[0]+cost) it would be like this

    }
    // dp[i] returns min cost upto day[i]
    return dp[365];
}


int main()
{
    vector<int> days = {1, 4, 6, 7, 8, 20};
    vector<int> costs = {2, 7, 15};
    cout << mincostTickets(days, costs);
    return 0;
}