class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> degree(n), order(n), vals(n);
        int m = roads.size();
        for(int i=0;i<m;i++){
            degree[roads[i][0]]++;
            degree[roads[i][1]]++;
        }
        for(int i=0;i<n;i++) order[i] = i;
        sort(order.begin(),order.end(),[&](int i, int j)->bool{
            return degree[i] < degree[j]; //sort nodes by their degreeree. The higher degreeree means it will be connected to higher number of edges. So we should give it as high value as possible.
        });
        for(int i =0;i<n;i++) vals[order[i]] = i+1;
        long long ans = 0;
        for(int i=0;i<m;i++){
            ans += vals[roads[i][0]];
            ans += vals[roads[i][1]];
        } 
        return ans;
    }
};