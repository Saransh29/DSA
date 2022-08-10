#include <bits/stdc++.h>
using namespace std;

int ceilSearch(vector<int> &arr, int key)
{
    int res;
    int l = 0;
    int h = arr.size() - 1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            l = mid + 1;
        else
        {
            res = mid;
            h = mid - 1;
        }
    }
    return res;
}

int main()
{
    vector<int> arr = {1,20,50,100,110};
    int x = 40;
    int res = ceilSearch(arr, x);
    cout << res;
    return 0;
}
