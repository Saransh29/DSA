
int t[n+1][w+1];
memset(t,-1,sizeof(t));



int Knapsack(int wt[],int val[],int w , int n)
{
    //BASE CONDITION
    if(n==0||w==0)
        return 0;
    if(t[n][w]==-1)
        return t[n][w];


    //CHOICE DIAGRAM 
    if(wt[n-1]<=w)
        return t[n][w] = Max(val[n-1]+ Knapsack(wt,val,w-wt[n-1],n-1),Knapsack(wt,val,w,n-1));
    else if(wt[n-1]>w)
        return t[n][w] = Knapsack(wt,val,w,n-1);
}