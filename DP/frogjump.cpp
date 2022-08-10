#include<bits/stdc++.h>

//recursion approach
int f(int index, vector<int> &heights)
{
    if(index==0) return 0;
    
    int left = f(index-1,heights) + abs(heights[index]-heights[index-1]);
    int right = INT_MAX;
    if(index>1) right = f(index-2,heights) + abs(heights[index]-heights[index-2]);
    
    return min(left,right);
}
int frogJump(int n, vector<int> &heights)
{
    return f(n-1,heights);
}


// memoization approach O(n) time and O(n+n)space
int f(int index, vector<int> &heights,vector<int>&dp)
{
    if(index==0) return 0;
    if(dp[index]!=-1) return dp[index];
    int left = f(index-1,heights,dp) + abs(heights[index]-heights[index-1]);
    int right = INT_MAX;
    if(index>1) right = f(index-2,heights,dp) + abs(heights[index]-heights[index-2]);
    
    return dp[index] = min(left,right);
}
int frogJump(int n, vector<int> &heights)
{
    vector<int>dp(n+1,-1);
    return f(n-1,heights,dp);
}

//tabulation approach
int frogJump(int n, vector<int> &heights)
{
    vector<int>dp(n+1,-1);
    dp[0] = 0;
    for(int i=1;i<=n;i++)
    {
        int left = dp[i-1] + abs(heights[i]-heights[i-1]);
        int right = INT_MAX;
        if(i>1) right = dp[i-2] + abs(heights[i]-heights[i-2]);
        dp[i] = min(left,right);
    }
    return dp[n];
}


// O(n) approach O(1) space
//intuitive approach

int frogJump_o1(int n, vector<int> &heights)
{
    int prev=0;
    int prev2=0;
    for(int i=1;i<n;i++)
    {
        int left = prev + abs(heights[i]-heights[i-1]);
        int right = INT_MAX;
        if(i>1) right = prev2 + abs(heights[i]-heights[i-2]);
    
        int curr_i= min(left,right);
        
        prev2 = prev;
        prev = curr_i;
    }
    return prev;
    
    
}