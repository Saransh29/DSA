#include <bits/stdc++.h>
using namespace std;

int maxsubarrsum(vector<int> vec, int k)
{
    int n = vec.size();
    int window_start = 0, window_sum = 0;
    int max_sum = INT_MIN;
    for (int window_end = 0; window_end < n; window_end++)
    {
        window_sum += vec[window_end];
        if (window_end >= k - 1)
        {
            max_sum = max(window_sum, max_sum);
            
            window_sum -= vec[window_start];
            window_start++;
        }
    }
    return max_sum;
}
int main()
{
    vector<int> vec;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int k;
    cin >> k;
    cout << maxsubarrsum(vec, k);
    return 0;
}