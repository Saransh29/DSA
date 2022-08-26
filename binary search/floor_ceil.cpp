#include <bits/stdc++.h>
using namespace std;

/*
    floor = largest integer less than or equal to x
    ceil = smallest integer greater than or equal to x
*/

// O(N) approach
pair<int, int> get_floor_and_ceil(vector<int> vec, int n, int x)
{

    int floor = INT_MIN;
    int ceil = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (vec[i] == x)
            return {x, x};
        if (vec[i] < x)
        {
            floor = max(floor, vec[i]);
        }
        else
        {
            ceil = min(ceil, vec[i]);
        }
    }
    if (floor == INT_MIN)
        floor = -1;
    if (ceil == INT_MAX)
        ceil = -1;
    return {floor, ceil};
}

// alternate approach  O(N log N)
pair<int, int> getFloorAndCeil(vector<int> vec, int n, int x)
{

    int l = 0;
    int h = n - 1;
    // sort(arr,arr+n);
    sort(vec.begin(), vec.end());

    int ceili = -1;
    int floori = -1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (vec[mid] == x)
        {
            return {x, x};
        }
        else if (vec[mid] > x)
        {
            ceili = vec[mid];
            h = mid - 1;
        }
        else
        {
            floori = vec[mid];
            l = mid + 1;
        }
    }
    return {floori, ceili};
}

int main()
{
    vector<int> vec = {5, 6, 8, 9, 6, 5, 5, 6};
    int n = vec.size();
    int x = 7;
    // pair<int, int>p = getFloorAndCeil(vec, n, x);
    pair<int, int> p = get_floor_and_ceil(vec, n, x);
    cout << "floor: " << p.first << " ceil: " << p.second << endl;
}
