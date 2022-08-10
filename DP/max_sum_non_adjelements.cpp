#include <bits/stdc++.h>
using namespace std;
// recursion
int f(int ind, vector<int> &vec)
{
    if (ind == 0)
        return vec[ind];
    if (ind < 0)
        return 0;

    int pick = vec[ind] + f(ind - 2, vec);
    int not_pick = f(ind - 1, vec);

    return max(pick, not_pick);
}
// memoization

int f(int ind, vector<int> &vec, vector<int> &dp)
{
    if (ind == 0)
        return vec[ind];
    if (ind < 0)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];

    int pick = vec[ind] + f(ind - 2, vec, dp);
    int not_pick = f(ind - 1, vec, dp);

    return dp[ind] = max(pick, not_pick);
}
int maximumNonAdjacentSum(vector<int> &nums)
{
    vector<int> dp(nums.size() + 1, -1);
    return f(nums.size() - 1, nums, dp);
}

// tabulation

int maxsumadj_tabulation(vector<int> &vec)
{
    int n = vec.size();
    vector<int> dp(n, 0);

    dp[0] = vec[0];
    dp[1] = max(vec[0], vec[1]);
    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + vec[i]);
        // max(take, nontake)
    }
    return dp[n - 1];
}
// intuitive approach
int maxsumadj_intuitive(vector<int> &vec)
{
    int n = vec.size();
    vector<int> dp(n, 0);

    int prev = vec[0];
    int prev2 = 0;
    for (int i = 1; i < n; i++)
    {
        int take = vec[i];
        if (i >= 1)
            take += prev2;

        int not_take = 0 + prev;

        int curri = max(take, not_take);
        prev2 = prev;
        prev = curri;
    }
    return prev;
}
int main()
{
    vector<int> vec = {2, 1, 4, 9};
    // vector<int>dp=max_sum_non_adjelements(vec);
    // vector<int>dp = f(n-1,vec);
    // for(int i=0;i<dp.size();i++)
    // {
    //     cout<<dp[i]<<" ";
    // }
    // cout << f(vec.size() - 1, vec) << endl;
    cout << maxsumadj_intuitive(vec);
    cout << endl;
    return 0;
}