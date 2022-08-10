#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }
}
int main()
{
    int n, m; // n no. of vertices
              // m no. of edges
    cin >> n >> m;

    vector<int> adj[n + 1];
    // if weighted graph the vector<pair<int,int>> adj[n+1]

    // edge input
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        addEdge(adj, u, v);

        // adj[u].push_back(v);
        // adj[v].push_back(u);
        // adj[v].push_back({u,wt});
    }
    // printGraph(adj, n);
    
    return 0;
}
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m = image.size();
        int n = image[0].size();
        queue<pair<int, int>> q;
        q.push(make_pair(sr, sc));
        int startColor = image[sr][sc];
        if (startColor == newColor) return image;
        int e[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        image[sr][sc] = newColor;
        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for (int k = 0; k < 4; k++) {
                int x = r + e[k][0];
                int y = c + e[k][1];
                if (x >= 0 && y >= 0 && x < m && y < n && image[x][y] == startColor) {
                    image[x][y] = newColor;
                    q.push(make_pair(x, y));
                }
            }
        }
        return image;
    }
};
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int rows=image.size();
        int col=image[0].size();
        
        //BFS solution
        
        int prevColor = image[sr][sc];
        queue<pair<int, int>> q;
        
        //starting row , col push krdia queue m , and wahan se flood krvadiya newColor ko har direction m
        q.push(make_pair(sr,sc));

        
        while (!q.empty()) 
        {
            int x = q.front().first; 
            int y= q.front().second; 
            q.pop();
            
        if (x >= 0 && y >= 0 && x < rows && y < col && image[x][y] == prevColor) {
            
            image[x][y] = newColor;
            q.push({ x + 1, y });
            q.push({ x - 1, y });
            q.push({ x, y + 1 }); 
            q.push({ x, y - 1 });            
            }             
        }      
      return image;     
    }
};