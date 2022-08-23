#include <bits/stdc++.h>
using namespace std;

vector<int> square_sorted_array(vector<int> nums)
{
    int n =nums.size();
    int l = 0;
    int h = n - 1;

    vector<int> res(n);
    int index = n - 1;

    while (l <= h)
    {
        int left_square = nums[l] * nums[l];
        int right_square = nums[h] * nums[h];
        if(left_square > right_square)
        {

            res[index] = left_square;
            l++;
        }
        else
        {
            res[index] = right_square;
            h--;
        }
        index--;
    }
    return res;
}
int main()
{
    vector<int> vec{-4, -1, 0, 3, 10};

    vector<int> res = square_sorted_array(vec);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}
