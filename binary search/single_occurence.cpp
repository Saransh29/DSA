#include <bits/stdc++.h>
using namespace std;

void search(vector<int> nums)
{
    int n = nums.size();
    int l = 0;
    int h = n - 1;
    int mid;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        if (mid % 2 == 0) //  
        {
            if (nums[mid] == nums[mid + 1])//if equal then element is to the right
                l = mid + 2;
            else    //if not equal then element is to the left
                h = mid;
        }
        else
        {
            if (nums[mid] == nums[mid - 1])//if equal then element is to the right
                l = mid + 1;
            else    //if not equal then element is to the left
                h = mid - 1;
        }
    }
    return nums[l];
}

int main()
{
    return 0;
}
