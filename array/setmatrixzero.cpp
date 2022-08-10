#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &mt)
{

    int m = mt.size();
    int n = mt[0].size();
    vector<pair<int, int>> p;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mt[i][j] == 0)
            {
                p.push_back({i, j});
            }
        }
    }

    int y = p.size();
    for (int x = 0; x < y; x++)
    {
        int p1 = p[x].first;
        int p2 = p[x].second;

        for (int t = 0; t < n; t++)
            mt[p1][t] = 0;

        for (int t = 0; t < m; t++)
            mt[t][p2] = 0;
    }
}
int main()
{
    vector<vector<int>> mt = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};

    setZeroes(mt);

    for (int i = 0; i < mt.size(); i++)
    {
        for (int j = 0; j < mt[0].size(); j++)
        {
            cout << mt[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}