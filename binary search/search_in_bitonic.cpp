#include <bits/stdc++.h>
using namespace std;

int ascending_search(vector<int> vec, int target)
{
    int low = 0;
    int high = vec.size() - 1;
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
int descending_search(vector<int> vec, int target, int low)
{

    int high = vec.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (vec[mid] == target)
            return mid;
        else if (vec[mid] > target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int bitonic_peak(vector<int> vec)
{
    int low = 0;
    int high = vec.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (vec[mid] > vec[mid - 1] && vec[mid] > vec[mid + 1]) // the maximum
            return mid;
        if (vec[mid] > vec[mid - 1] && vec[mid] < vec[mid + 1]) // in increasing zone
            low = mid + 1;
        if (vec[mid] < vec[mid - 1] && vec[mid + 1] < vec[mid]) // in decreasing zone
            high = mid - 1;
    }
    return vec[vec.size() - 1];
}
int search(vector<int> vec, int target)
{

    int peak = bitonic_peak(vec);

    if (vec[peak] == target)
        return peak;
    if (ascending_search(vec, target) == -1)
        return descending_search(vec, target, peak);

    return ascending_search(vec, target);
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 1};
    cout << search(vec, 3) << endl;
}