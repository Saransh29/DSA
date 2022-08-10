#include <bits/stdc++.h>
using namespace std;

// recursion
int f(int i, int j, vector<vector<int>> grid)
{
    if (i == 0 && j == 0)
        return 1;
    if (i >= 0 && j >= 0 && grid[i][j] == 1)
        return 0;
    if (i < 0 || j < 0)
        return 0;

    return f(i - 1, j, grid) + f(i, j - 1, grid);
}
int uniquepaths(int m, int n, vector<vector<int>> grid)
{
    return f(m - 1, n - 1, grid);
}
// memoization
int f_memo(int i, int j, vector<vector<int>> grid, vector<vector<int>> dp)
{
    if (i == 0 && j == 0)
        return 1;
    if (i >= 0 && j >= 0 && grid[i][j] == 1)
        return 0;
    if (i < 0 || j < 0)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];
    return dp[i][j] = f_memo(i - 1, j, grid, dp) + f_memo(i, j - 1, grid, dp);
}
int uniquepaths_memo(int m, int n, vector<vector<int>> grid)
{
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return f_memo(m - 1, n - 1, grid, dp);
}
// tabulation

int uniquepaths_tabulation(int m, int n, vector<vector<int>> grid)
{
    vector<vector<int>> dp(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
                continue;
            if (i == 0 && j == 0)
                dp[i][j] = 1;
            else
            {
                int up = 0;
                int left = 0;
                if (i > 0)
                    up = dp[i - 1][j];
                if (j > 0)
                    left = dp[i][j - 1];
                dp[i][j] = up + left;
            }
        }
    }
    return dp[m - 1][n - 1];
}
int main()
{
    int m, n;
    // vector<vector<int>>grid(m,vector<int>(n,0));
    vector<vector<int>> grid = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0}};
    m = grid.size();
    n = grid[0].size();

    cout << uniquepaths_tabulation(m, n, grid);
    return 0;
}