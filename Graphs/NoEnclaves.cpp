class Solution
{
public:
    int numEnclaves(vector<vector<int>> &grid)
    {

        int rows = grid.size();
        int col = grid[0].size();

        // BFS solution

        int res = 0;
        queue<pair<int, int>> q;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < col; j++)
            {
                res += grid[i][j];                               // contains total no. of land
                if (i * j == 0 || i == rows - 1 || j == col - 1) // whole boundary pairs pushed into queue
                    q.push(make_pair(i, j));
            }
        }

        while (!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if (x < 0 || y < 0 || x == rows || y == col || grid[x][y] != 1) // boundary se bahar jaa rha h to wo iteration skip krdo
                continue;

            grid[x][y] = 0; // flood fill the pieces attached to the boundary
            res--;

            q.push({x + 1, y});
            q.push({x - 1, y});
            q.push({x, y + 1});
            q.push({x, y - 1});
        }

        return res;
    }
};