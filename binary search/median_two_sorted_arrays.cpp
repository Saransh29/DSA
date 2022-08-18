#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{

    int n1 = nums1.size();
    int n2 = nums2.size();

    if (n1 > n2)
        return findMedianSortedArrays(nums2, nums1);

    int l = 0;
    int h = n1;

    while (l <= h)
    {

        int partition_n1 = (l + h) / 2;
        int partition_n2 = (n1 + n2 + 1) / 2 - partition_n1;

        int max_left_n1 = (partition_n1 == 0) ? INT_MIN : nums1[partition_n1 - 1];
        int min_right_n1 = (partition_n1 == n1) ? INT_MAX : nums1[partition_n1];

        int max_left_n2 = (partition_n2 == 0) ? INT_MIN : nums2[partition_n2 - 1];
        int min_right_n2 = (partition_n2 == n2) ? INT_MAX : nums2[partition_n2];

        if (max_left_n1 <= min_right_n2 && max_left_n2 <= min_right_n1)
        {
            if ((n1 + n2) % 2 == 0)
            {

                double res = (max(max_left_n1, max_left_n2) + min(min_right_n1, min_right_n2)) / 2.0;
                return res;
            }
            else
            {
                double ans = max(max_left_n1, max_left_n2);
                return ans;
            }
        }
        else if (max_left_n1 > min_right_n2)
            h = partition_n1 - 1;
        else
            l = partition_n1 + 1;
    }

    return -1;
}
int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    cout << findMedianSortedArrays(nums1, nums2);
}