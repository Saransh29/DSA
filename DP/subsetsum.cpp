int t[n+1][w+1];

int subsetsum(int wt[],int val[],int w , int n)
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
    if(wt[n-1]<=w)
        t[n][w] = Max(val[n-1]+ t[n-1][w-wt[n-1]],t[n-1][w]);
    else
        t[n][w] = t[n-1][w];
}