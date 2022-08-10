#include<bits/stdc++.h>
using namespace std;


//frog can jump k steps
//recursion approach

int frogjump(int index , vector<int>cost,int k)
{
    if(index==0) return 0;

    int min_steps = INT_MAX;

    for(int i=1;i<=k;i++)
    {
        if(index-i>=0)
        {
            int steps = frogjump(index-i,cost,k)+abs(cost[index]-cost[index-i]);
            min_steps = min(min_steps,steps);
        }
    }
    return min_steps;
}

//memoization approach
// O(n*k) time and O(n+n) space
int frogjump_memo(int ind , vector<int>cost,vector<int>&dp,int k)
{
    if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];

    int min_steps = INT_MAX;

    for(int i=1;i<=k;i++)
    {
        if(ind-j>=0)
        {
            int steps = frogjump_memo(ind-j,cost,dp,k)+abs(cost[i]-cost[i-j]);
            min_steps = min(min_steps,steps);
        }     
    }
    return dp[ind]=min_steps;
}


//tabulation approach
// O(n*k) time and O(n) space
int frogjump_tab(int n , vector<int>cost,vector<int>&dp,int k)
{
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    dp[0]=0;
    for(int i=1;i<=k;i++)
    {
        int min_steps = INT_MAX;
        for(int j = 1;j<=k;j++)
        {
            if(i-j>=0)
            {
            int steps = dp[i-j]+abs(cost[i]-cost[i-j]);
            min_steps = min(min_steps,steps);
            }
            
        }
        dp[i]=min_steps;
        
    }
    return dp[n-1];
}
int main()
{
    int n;
    cin>>n;
    vector<int>cost(n);
    for(int i=0;i<n;i++)
    {
        cin>>cost[i];
    }
    int k;
    cin>>k;
    vector<int>dp(n+1,-1);
    cout<<frogjump_tab(n,cost,dp,k)<<endl;
    // cout<<frogjump(n-1,cost,k)<<endl;
    return 0;
}