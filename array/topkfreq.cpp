#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
vector<int> topKFrequent1(vector<int> &nums, int k)
{

    int n = nums.size();

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[nums[i]]++;

    vector<pair<int, int>> v;

    for (auto i : mp)
        v.push_back(i);

    sort(begin(v), end(v), cmp); // sort by their freq

    vector<int> ans;

    for (int i = 0; i < k; i++)
        ans.push_back(v[i].first);
    return ans;
}

vector<int> topKFrequent(vector<int> &nums, int k)
{

    int n = nums.size();

    unordered_map<int, int> mp;
    vector<int> vec;

    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        vec.push_back(it->first);
    }
    sort(vec.begin(), vec.end(), [&mp](int a, int b)
         { return mp[a] > mp[b]; });
    return vector<int>(vec.begin(), vec.begin() + k);
}

int main()
{
    vector<int> vec = {1, 1, 2, 2, 2, 2, 3};
    int k = 2;
    vector<int> vec1 = topKFrequent1(vec, k);
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    return 0;
}
