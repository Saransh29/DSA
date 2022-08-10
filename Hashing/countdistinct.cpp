#include <bits/stdc++.h>
using namespace std;

int countdistinct(vector<int> &arr)
{
    unordered_set<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
        s.insert(arr[i]);
    }
    return s.size();
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << countdistinct(arr);
}