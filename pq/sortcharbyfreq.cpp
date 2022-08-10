#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s)
{

    int n = s.length();

    string res = "";

    unordered_map<char, int> mp;
    priority_queue<pair<int, char>> pq;

    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    for (auto it : mp)
    {
        pq.push({it.second, it.first});
        // cout << it.first << " " << it.second << endl;
    }
    while (!pq.empty())
    {
        cout << pq.top().second << " " << pq.top().first << endl;
        int temp = pq.top().first;
        while (temp--)
        {
            res.push_back(pq.top().second);
        }

        pq.pop();
    }
    return res;
}

int main()
{
    string s = "tree";
    cout << frequencySort(s);
    return 0;
}