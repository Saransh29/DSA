#include <bits/stdc++.h>
using namespace std;

int count_sorted_array(vector<int> vec)
{
    // just return the index of min. element
    int mini = INT_MAX;

    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] < vec[i - 1])
            return i;
    }
    return mini;
}
//concise solution
int findmin(vector<int> vec)
{
    int l = 0, h = vec.size() - 1;
    while (l < h)
    {
        int mid = l + (h - l) / 2;
        if (vec[mid] > vec[h])
            l = mid + 1;
        else
            h = mid;
    }
    return l;
}
int minElem(vector<int> vec)
{
    // using binarysearch
    int n = vec.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;

        if (vec[mid] <= vec[next] && vec[mid] <= vec[prev])
        {

            return mid;
        }
        if (vec[mid] > vec[high])
        {
            low = mid + 1;

            // left side is sorted
            // so search right side
        }
        else
        {
            // right side is sorted (vec[mid]<vec[high])
            //  sp search left side

            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {4, 5, 6, 7, 0, 1, 2};
    // cout << count_sorted_array(vec);
    // cout << minElem(vec);
    cout << findmin(vec);
    return 0;
}