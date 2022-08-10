#include <bits/stdc++.h>
using namespace std;

//recursive solution
int f(int day,int last,vector<vector<int>> &points)
{
    if(day==0)
    {
        int maxi=0;
        for(int i =0;i<3;i++)
            if(i!=last) maxi=max(maxi,points[0][i]);


        return maxi;
    }
    int maxi=0;
    for(int i =0;i<3;i++)
        if(i!=last)
            {
                int point =points[day][i]+f(day-1,i,points);
                maxi=max(maxi,point);
            }

    return maxi; 
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    return f(n-1,3,points);
}

//memoization
#include<bits/stdc++.h>
int f(int day,int last,vector<vector<int>> &points,vector<vector<int>> &dp)
{
    if(day==0)
    {
        int maxi=0;
        for(int i =0;i<3;i++)
        {
            if(i!=last)
            {
                maxi=max(maxi,points[0][i]);
            }
        }
        return maxi;
    }
    if(dp[day][last]!=-1) return dp[day][last];
    int maxi=0;
    for(int i =0;i<3;i++)
        {
            if(i!=last)
            {
                int point =points[day][i]+f(day-1,i,points,dp);
                maxi=max(maxi,point);
            }
        }
    return dp[day][last]=maxi;
    
    
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>>dp(n,vector<int>(4,-1));
    return f(n-1,3,points,dp);
}

//tabulation
int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>>dp(n,vector<int>(4,0));
    
    dp[0][0]=max(points[0][1],points[0][2]);
    dp[0][1]=max(points[0][0],points[0][2]);
    dp[0][2]=max(points[0][1],points[0][0]);
    dp[0][3]=max(points[0][1],max(points[0][0],points[0][2]));
    
    for(int day=1;day<n;day++)
    {
        for(int last=0;last<4;last++)
        {
            for(int task=0;task<3;task++)
            {
                if(task!=last)
                {
                    int point =points[day][task]+dp[day-1][task];
                    dp[day][last]=max(dp[day][last],point);
                }
            }
        }
    }
    return dp[n-1][3];


}

int main()
{

    vector<vector<int>> points = {{1, 2, 5}, {3, 1, 1}, {3, 3, 3}};

    cout << ninjaTraining(points.size(), points);
    return 0;
}