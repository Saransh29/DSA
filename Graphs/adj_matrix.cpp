#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , m;
    cin>>n>>m;

    int adj[n+1][n+1]; 
    //edge input
    for(int i = 0 ; i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    
 
    for(int i=0; i<n+1; i++)
    {
        cout<<i<< " ";

        for(int j=0; j<adj[i][0]; j++)
        {
            cout << adj[i][j] << " ";
        }

        cout<< endl;
    }
    return 0;
}