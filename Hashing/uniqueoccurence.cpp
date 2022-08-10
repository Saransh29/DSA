#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &a,
         pair<int, int> &b)
{
    return a.second < b.second;
}

bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> mp;
    int t = 1001;
    for (int i = 0; i < arr.size(); i++) mp[arr[i]]++;
 
    vector<int> res;
    set<int> st;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        // approach 1
        //  if(it->second != t) t = it->second;
        // 
        //  else return false;

        // approach 2
        //  res.push_back(it->second);

        // approach 3
        st.insert(it->second);
    }
    // sort(res.begin(),res.end());

    // for(int i=0;i<res.size()-1;i++)
    // {
    //     if(res[i]==res[i+1])return false;
    // }

    // return true;
    return st.size() == mp.size();
}

int main()
{
    vector<int> arr = {-130, 21, -154, 159, -44, -126, 165, 68, -126, -126, -126, 128, -94, 165, -30, -44, -39, -94, 21, -130, 68, 68, 128, -130, -39, 181, 68, 68, 68, 139, 139, -39, 21, 21, -39, 68, 128, 131, -126, -154, -30, 165, 21, 159, 181, -39, -126, 131, -94, -44, 131, 128, 21, -44, 128, -94, 183, -94, 131, 139, -44, 128, 21, 181, -44, 131, 128, 131, 21, 68, 181, -44, -126, -130, 131, -190, 131, 181, 165, -94, 165, 165, -30, -154, 68, -39, -44, 165, -39, -126, 68, 68, -130, 68, -94, 181, -44, 131, 21, 183, -44, 21, -39, -130, -39, 131, 21, 165, 165, -126, 165, -44, -94, 68, 68, -94, -126, -126, -30, 181, 165, 68, -44, -39, -94, -126, -126, -30, 68, 181, -44, -94, -126, -44, -94, -30, 131, 165, -190, -130, -94, -94, 181, 128, 181, 181, 181, 139, -130, -94, -130, -130, 139, -130, -90, -154, 181, 165, -30, -154, 165, -190, 159, 165, 139, -126, -44, 131, -44, -190, -126, -130, -94, 128, -154, 68, -130, -130, 68, 21, -44, -30, -126, -126, 131, 159, -190, -126, 181, 139};

    if (uniqueOccurrences(arr))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}