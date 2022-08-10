#include <bits/stdc++.h>

using namespace std;
int fib(int n)
{
    vector<int> dp(n + 1);

    if (n <= 1)
        return n;

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int fib_optimised(int n)
{

    if (n <= 1)
        return n;

    int prev2 = 0;
    int prev1 = 1;
    int curr_i;
    for (int i = 2; i <= n; i++)
    {
        curr_i = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr_i;
    }

    return prev1;
}

int main()
{
    int n;
    cin >> n;
    cout << fib_optimised(n);
    return 0;
}