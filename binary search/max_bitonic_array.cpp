#include <bits/stdc++.h>
using namespace std;

int max_bitonic(vector<int> vec)
{
    // edge case
    if (nums.size() == 1)
        return 0;

    // peak is first element
    if (nums[0] > nums[1])
        return 0;

    // peak is last element
    if (nums.back() > nums[nums.size() - 2])
        return nums.size() - 1;

    int low = 0;
    int high = vec.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (vec[mid] > vec[mid + 1] && vec[mid] > vec[mid - 1])
            return mid;
        else if (vec[mid] < vec[mid + 1])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 3, 1};
    cout << max_bitonic(vec) << endl;
}