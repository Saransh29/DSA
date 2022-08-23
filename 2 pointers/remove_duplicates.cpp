#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums)
{

    if (nums.size() == 0)
        return 0;

    int left = 0; // left signifies the index till which duplicates are removed
    for (int right = 1; right < nums.size(); right++)
    {
        if (nums[left] != nums[right])
            left++;
        nums[left] = nums[right];
    }
    return left + 1;
}
int remove_key(vector<int> &nums, int key)
{
    int left = 0; // left signifies the index till which key is removed
    for (int right = 0; right < nums.size(); right++)
    {
        if (nums[right] != key)
        {
            nums[left] = nums[right];
            left++;
        }
    }
    return left;
}
int main()
{
    vector<int> vec = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = removeDuplicates(vec);
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int t = remove_key(nums, 2);

    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
}