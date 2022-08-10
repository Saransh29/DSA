#include <bits/stdc++.h>
using namespace std;
int findmin(vector<int> &nums)
{
    int l = 0, h = nums.size() - 1;
    while (l < h)
    {
        int mid = l + (h - l) / 2;
        if (nums[mid] > nums[l])
            l = mid + 1;
        else
            h = mid;
    }
    return l;
}
int search(vector<int> &nums, int target)
{
    int n = nums.size();

    int l = 0, h = n - 1;
    int min = findmin(nums);

    // target is in the right side sorted array
    if (target >= nums[min] && target <= nums[h])
        l = min;
    else
        h = min;
    // target is in the left side sorted array

    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (nums[mid] == target)
            return mid;
        if (nums[mid] > target)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    // cout << search(nums, 0);
    cout << findmin(nums);
}