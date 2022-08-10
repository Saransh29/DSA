class Solution {
public:
    
    void dfs(int v , vector<bool>visited)
    {
        visited[v] = true;
        for(int i = 0 ; i<visited.size(); i++)
        {
            if(visited[i] == false)
            {
                dfs(i,visited);
            }
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<bool>visited(n+1,false);
        // for(int i = 0 ; i<n+1; i++)
        // {
        //     visited[i] = false;
        // }
        
        dfs(1,visited);
        long long count = 0;
        for(int i = 0 ; i<visited.size(); i++)
        {
            if(visited[i] == false)
            {
                count++;
            }
        }
        return count;
    }
};
class Solution {
public:
    
    void dfs(int node, vector<int> graph[], int n, vector<bool> &vis) {
        
        vis[node] = true;
        for(auto it : graph[node]) {
            if(!vis[it]) {
                dfs(it, graph, n, vis);
            }
        }
        
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        
        int size = edges.size();
        vector<int> graph[n];
        int count = 0;
        for(int i = 0; i < size; i++) {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        
        long long ans = 0;
        vector<bool> vis(n, false);
        vector<bool> temp(n, 0);
        
        for(int i = 0; i < n; i++) { 
            if(!vis[i]) {
                dfs(i, graph, n, vis);
            }
            else {
                i++;
            }

            int cnt1 = 0, cnt2 = 0;
            for(int j = 0; j < n; j++) {
                if(vis[j] == false) {
                    cnt1++;
                }
                if(vis[j] == true && temp[j] != 1) {
                    cnt2++;
                    temp[j] = 1;
                }
            }
            
            ans += (cnt1*cnt2);
            count++;
        }
        
        return ans;
        
    }
};
class Solution {
private:
    long long dfs(int node, vector<int> adj[], vector<bool> &vis){
        vis[node] = 1;
        int len = 1;
        for(auto itr : adj[node]){
            if(!vis[itr]){
                len += dfs(itr, adj, vis);
            }
        }
        return len;
    }
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        for(auto e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<int>cmp;
        vector<bool>vis(n,0);
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                long long len = dfs(i, adj, vis);
                cmp.push_back(len);
            }
        }
        int m = cmp.size();
        vector<int> suf(m , 0);
        suf[m-1] = 0;
        for(int i = m-2; i >= 0; i--){
            suf[i] = suf[i+1] + cmp[i+1];
        }
        long long ans = 0;
        for(int i = 0; i < m; i++){
            ans += (cmp[i]*1LL*suf[i]);
        }
        return ans;
    }
};
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        bool d1;
        bool d2;
        bool other;
        
        for(int i=0;i<n;i++)
        {
            if(grid[i][i]!=0)
                d1=true;
            else
                d1=false;
                
        }
        for(int j=m-1;j>=0;j--)
        {
            if(grid[j][j]!=0)
                d2=true;
            else
                d2=false;
                
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<n;i++)
            {
                if(grid[i][j]==0 && i!=j)
                    other = true;
                else
                    other = false;
            }
        return d1 && d2 && other;
        
    }
};