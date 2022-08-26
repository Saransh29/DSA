#include <bits/stdc++.h>
using namespace std;
typedef pair<int, string> ps;

// comparator for sorting from highest to lowest by freq ,
//  and if same freq lexicographical comparison

struct cmp
{
    bool operator()(ps x, ps y)
    {
        // freq comparison
        if (x.first < y.first)  //for decreasing order
            return true;

        else if (x.first > y.first) //for decreasing order
            return false;

        else // if freq same
        {
            // if (x.second < y.second) return false;
            // else return true;

            return (x.second > y.second);
            // seedha compare lexigraphically
        }
    }
};
struct cmp2
{
    bool operator()(ps a, ps b)
    {         //if freq same then lexico comparison
        return (a.first == b.first) ? a.second > b.second : a.first < b.first;
    }                                                   //else sort in decreasing order
};
vector<string> topKFrequent(vector<string> &words, int k)
{

    unordered_map<string, int> mp;
    priority_queue<ps, vector<ps>, cmp2> pq;

    for (auto it : words)
        mp[it]++;
    for (auto it : mp)
        pq.push({it.second, it.first});

    vector<string> res;
    while (k--)
    {
        res.push_back(pq.top().second);
        pq.pop();
    }
    return res;
}

int main()
{
    vector<string> words = {"the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"};
    int k = 4;
    vector<string> res = topKFrequent(words, k);
    for (auto it : res)
        cout << it << " ";
    cout << endl;
    return 0;
}