

BFS 1

    class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {

        int rows = image.size();
        int col = image[0].size();

        // BFS solution

        int prevColor = image[sr][sc];
        queue<pair<int, int>> q;

        // starting row , col push krdia queue m , and wahan se flood krvadiya newColor ko har direction m
        q.push(make_pair(sr, sc));

        if (prevColor == newColor)
            return image;

        while (!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if (x >= 0 && y >= 0 && x < rows && y < col && image[x][y] == prevColor)
            {

                image[x][y] = newColor;
                q.push({x + 1, y});
                q.push({x - 1, y});
                q.push({x, y + 1});
                q.push({x, y - 1});
            }
        }
        return image;
    }
};

// BFS 2

class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {

        int rows = image.size();
        int col = image[0].size();

        // BFS solution

        int prevColor = image[sr][sc];
        queue<pair<int, int>> q;

        // starting row , col push krdia queue m , and wahan se flood krvadiya newColor ko har direction m
        q.push(make_pair(sr, sc));

        if (prevColor == newColor)
            return image;

        while (!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if (x < 0 || y < 0 || x == rows || y == col || image[x][y] != prevColor) // boundary se bahar jaa rha h to wo iteration skip krdo
                continue;                                                            // OR already visited h to skip krdo

            image[x][y] = newColor; // flood fill the pieces attached to the boundary

            q.push({x + 1, y});
            q.push({x - 1, y});
            q.push({x, y + 1});
            q.push({x, y - 1});
        }

        return image;
    }
};