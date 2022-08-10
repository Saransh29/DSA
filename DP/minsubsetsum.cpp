int sum , n = nums.size();
    for(int i=0;i<n;i++)
    {
        sum=sum+nums[i];
    }

int t[n+1][sum+1];

int subsetsum(int arr,int sum)
{
    //BASE CONDITION
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++)
        {
            if(i==0||j==0)
                t[i][j]= 0;
        }
    }

    //CHOICE DIAGRAM
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
        if(arr[i-1]<=sum)
            t[i][j] = Max(val[n-1] + t[n-1][sum-arr[i-1]] , t[n-1][sum]);
        else
            t[i][j] = t[n-1][sum];
        }
    }
    vector<int> v;
    for(int i=1;i<sum+1;i++)
    {
        if(t[n+1][i]==true)
        {
            v[i]=i;
        }
    }
}

int mn = INT_MIN;
for(int i=1;i<n+1;i++)
{
    mn = min(mn,sum-2*V[i]);
}
return mn;
