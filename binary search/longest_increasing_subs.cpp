#include <bits/stdc++.h>
using namespace std;

int increasing_subsequence(vector<int> &nums)
{
}
int contiguos(vector<int> &nums)
{

    int cnt = 0;
    int res = 0;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i + 1] > nums[i])
        {
            cnt++;
        }

        else
        {
            cnt = 0;
        }
        res = max(res, 1 + cnt);
    }
    return res;
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 2, 3};
    cout << contiguos(nums);
    return 0;
}