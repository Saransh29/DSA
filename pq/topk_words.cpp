#include <bits/stdc++.h>
using namespace std;

vector<string> topKFrequent(vector<string> &words, int k)
{

    int n = words.size();

    priority_queue<pair<int, string>> pq;

    map<string, int> mp;

    vector<string> res;

    for (auto it : words)
    {
        mp[it]++;
    }

    for (auto it : mp)
    {
        cout << mp.first << " " << mp.second;

        pq.push({mp.second, mp.first});
    }

    while (k > 0)
    {
        res.push_back(pq.top().first);
        pq.pop();
        k--;
    }
    return res;
}
int main()
{
    vector<string> words = {"the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"};
    int k = 4;
    vector<string> res = topKFrequent(words, k);
    for (auto it : res)
    {
        cout << it << " ";
    }
}