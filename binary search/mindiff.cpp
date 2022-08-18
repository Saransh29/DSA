#include <bits/stdc++.h>
using namespace std;

int mindiff(vector<int> vec, int target)
{
    int low = 0;
    int high = vec.size() - 1;

    if (target < vec[low])
        return vec[low];
    if (target > vec[high])
        return vec[high];

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (vec[mid] == target)
            return vec[mid];
        else if (vec[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (vec[low] - target < target - vec[high])
        return vec[low];
    else
        return vec[high];
    return -1;
}
int main()
{
    vector<int> vec = {3, 5, 7, 9, 10, 90, 100, 130};
    int target = 92;
    cout << mindiff(vec, target) << endl;
}