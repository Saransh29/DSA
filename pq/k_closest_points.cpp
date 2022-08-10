#include <bits/stdc++.h>
using namespace std;

typedef pair<double, int> pp;

double distance(int x1, int y1)
{
    return pow(pow(x1 - 0, 2) + pow(y1 - 0, 2), 0.5);
}
vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
{

    priority_queue<pp, vector<pp>, greater<pp>> pq;
    vector<vector<int>> res;

    int n = points.size();

    for (int i = 0; i < n; i++)
    {
        double dist = distance(points[i][0], points[i][1]);
        pq.push({dist, i});
    }
    while (k--)
    {
        int t = pq.top().second;
        res.push_back({points[t][0], points[t][1]});
        pq.pop();
    }
    return res;
}

int main()
{
    vector<vector<int>> points = {{1, 3}, {-2, 2}};
    int k = 1;
    vector<vector<int>> res = kClosest(points, k);
    for (auto it : res)
    {
        cout << it[0] << " " << it[1] << endl;
    }
    return 0;
}