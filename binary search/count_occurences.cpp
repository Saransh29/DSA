#include <bits/stdc++.h>

using namespace std;

int firstpos(vector<int> &vec, int elem)
{
    int n = vec.size();

    int res = -1;
    int l = 0, r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (vec[mid] == elem)
        {
            res = mid;
            r = mid - 1;
        }
        else if (vec[mid] > elem)
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return res;
}
int lastpos(vector<int> &vec, int elem)
{
    int n = vec.size();

    int res = -1;
    int l = 0, r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (vec[mid] == elem)
        {
            res = mid;
            l = mid + 1;
        }
        else if (vec[mid] > elem)
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return res;
}
int count(vector<int> &arr, int elem)
{

    int t1 = firstpos(arr, elem);
    int t2 = lastpos(arr, elem);
    if (t1 == -1)
        return 0;

    return t2 - t1 + 1;
}

int main()
{
    vector<int> arr = {2, 3, 3, 3, 7, 11, 12};
    int elem = 3;
    int res = count(arr, elem);
    cout << res;

    return 0;
}
