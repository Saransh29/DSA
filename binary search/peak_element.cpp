#include <bits/stdc++.h>
using namespace std;

// peak element is a number that is greater than its neighbors
int peak_element(vector<int> vec)
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
// sequential search
int findPeakElement(vector<int> &nums)
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

    for (int i = 1; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1] && nums[i] > nums[i - 1])
            return i;
    }
    return -1;
}
int peakElement(vector<int> &vec)
{
    // this returns the max element index in the vector
    priority_queue<pair<int, int>> pq;

    for (int i = 0; i < vec.size(); i++)
        pq.push({vec[i], i});

    return pq.top().second;
}
int main()
{
    vector<int> vec = {1, 2, 1, 3, 5, 6, 4};

    cout << peakElement(vec) << endl;
}