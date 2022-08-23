#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{

    unordered_map<int, int> mp;
    for (auto it : nums)
        mp[it]++;

    for(auto it:mp)cout<<it.first<<" "<<it.second<<endl;
    for (auto it : mp)
    {
        if (it.second == 1)
            return it.first;
    }
    return 0;
}

int main()
{
    vector<int> vec = {1,2,2};
    cout << singleNumber(vec) << endl;
    return 0;
}