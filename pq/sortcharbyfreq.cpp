#include <bits/stdc++.h>
using namespace std;

typedef pair<int, char> pc;
struct cmp
{
    bool operator()(pc a, pc b)
    {
        return (a.first == b.first) ? a.second > b.second : a.first < b.first;
    }
};
string freq_char_sort(string s)
{
    unordered_map<char, int> mp;

    priority_queue<pc, vector<pc>, cmp> pq;

    for (auto it : s)
        mp[it]++;

    for (auto it : mp)
    {
        pq.push({it.second, it.first});
    }
    string res;

    while (!pq.empty())
    {
        int t = pq.top().first;
        while (t--)
        {
            res.push_back(pq.top().second);
        }
        pq.pop();
    }
    return res;
}

string frequencySort(string s)
{

    int n = s.length();

    string res = "";

    unordered_map<char, int> mp;
    priority_queue<pc> pq;

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
        //  used string(count , char)
        // res+=string(pq.top().first,pq.top().second);

        pq.pop();
    }
    return res;
}

int main()
{
    string s = "tree";
    cout << freq_char_sort(s);
    return 0;
}