#include<bits/stdc++.h>
using namespace std;

bool bipartitebfs(int src , vector<int> adj[],int color[])
{
    queue<int>q;
    q.push(src);
    color[src]=1;

    while(!q.empty())
        {
            int node =  q.front();
            q.pop();
            for(auto it: adj[node]) 
            {
                if(color[it]==-1) {
                    color[it]=1-color[node];
                    q.push(it);
                }
                else if(color[it]==color[node]) 
                    return false; 
            }
        }
        return true;
}
bool checkbipartite(vector<int> adj[],int V) 
{
        //vector<int>color(V+1,-1);
        int color[V];
        memset(color,-1,sizeof color);
        
        for(int i = 0;i < V;i++){   
            if(color[i]==-1){
                if(!bipartitebfs(i,adj,color)){
                    return false;
                }
            }
        }
        return true; 
}
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}        
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v) {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }
}
int main(){
	
		int V;
        cin>>V;
        vector<int>adj[V];
        addEdge(adj, 0, 1);
        addEdge(adj, 0, 4);
        addEdge(adj, 1, 2);
        addEdge(adj, 1, 3);
        addEdge(adj, 1, 4);
        addEdge(adj, 2, 3);
        addEdge(adj, 3, 4);

		if(checkbipartite(adj,V))
            cout<<"yes";
        else 
            cout<<"no";
    
	return 0;
}  