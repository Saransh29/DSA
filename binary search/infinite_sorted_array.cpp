#include <bits/stdc++.h>
using namespace std;

// for infinite sorted array

int search(vector<int> vec, int target)
{
    int low = 0;
    int high = 1;

    while (target > vec[high])
    {
        low = high;
        high = 2 * high;
    }
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (vec[mid] == target)
            return mid;
        else if (vec[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int indexoffirstone(vector<int> v)
{
    int low = 0;
    int high = 1;

    while (v[high] != 1)
    {
        low = high;
        high = 2 * high;
    }
    int res = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == 1)
        {
            res = mid;
            high = mid - 1;
        }
        if (v[mid] == 0)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return res;
}
int main()
{
    vector<int> vec = {3, 5, 7, 9, 10, 90, 100, 130,
                       140, 160, 170};
    vector<int> v = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1};
    int target = 90;
    // int res = search(vec, target);
    int res = indexoffirstone(v);
    cout << res;
    return 0;
}