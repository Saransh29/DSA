#include <bits/stdc++.h>
using namespace std;

int solver(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n, 0);
    if (n == 1)
        return nums[0];
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        // max(take, nontake)
    }
    return dp[n - 1];
}
int solver_2(vector<int>&nums)
{
//   O(1) space solution
        
        int n = nums.size();
        int prev2 = 0;
        int prev = nums[0];
        for(int i=1; i<n; i++)
        {
            int including = nums[i] + prev2;
            int excluding = prev;

            int total = max(including, excluding);

            prev2 = prev;
            prev = total;
        }
        return prev;
}

int rob(vector<int> &nums)
{
    int n = nums.size();

    vector<int> temp1, temp2;
    if (n == 1)
        return nums[0];

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            temp1.push_back(nums[i]);
        if (i != n - 1)
            temp2.push_back(nums[i]);
    }
    int t1 = solver(temp1);
    int t2 = solver(temp2);

    return max(t1, t2);
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    cout << rob(nums) << endl;
    return 0;
}