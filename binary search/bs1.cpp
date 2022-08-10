#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> &arr, int elem)
{
    int n = arr.size();

    int l = 0, r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (elem == arr[mid])
            return mid;
        if (elem < arr[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int binarysearch_reverse(vector<int> &rev, int element)
{
    int n = rev.size();
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (element == rev[mid])
            return mid;
        if (element > rev[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int bs_order_not_known(vector<int> &arr, int elem)
{
    int n = arr.size();
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (elem == arr[mid])
            
        if (elem < arr[mid])
           
        else
           
    }
    return -1;
}
int main()
{
    vector<int> arr = {2, 3, 7, 9, 11, 12};
    int elem = 7;

    vector<int> rev = {12, 11, 9, 7, 3, 2};

    int ans = binarysearch(arr, elem);
    int res = binarysearch_reverse(rev, elem);
    cout << res;
    // cout << ans;
    return 0;
}