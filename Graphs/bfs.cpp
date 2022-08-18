#include <bits/stdc++.h>
using namespace std;
vector<int> bfs(int V, vector<int> adj)
{
    vector<int> res;
    queue<int> q;
    vector<int> vis(V + 1, 0);

    for (int i = 1; i <= V; i++)
    {
        if (!vis[i])
        {
            q.push(i);
            vis[i] = 1;
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                res.push_back(node);
                for (auto it : adj[node])
                {
                    if (!vis[it])
                    {
                        vis[it] = 1;
                        q.push(it);
                    }
                }
            }
        }
    }
    return bfs;
}
vector<int> bfsOfGraph(int V, vector<int> adj[])
{

    vector<int> bfs;
    vector<int> vis(V + 1, 0);
    queue<int> q;
    q.push(0);
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        bfs.push_back(temp); 
        for (auto it : adj[temp])
        {
            if (!vis[it])
            {
                q.push(it);
                vis[it] = 1;
            }
        }
    }

    return bfs;
}

int main()
{
    int V, E;
    cin >> V >> E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> bfs = bfsOfGraph(V, adj);
    for (int i = 0; i < bfs.size(); i++)
        cout << bfs[i] << " ";
    cout << endl;
}