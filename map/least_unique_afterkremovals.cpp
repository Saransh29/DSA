#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pp;
int findleastunique(vector<int> vec, int k)
{
    priority_queue<pp, vector<pp>, greater<pp>> pq;
    unordered_map<int, int> mp;

    for (auto it : vec)
        mp[it]++;

    for (auto it : mp)
    {
        pq.push({it.second, it.first});
    }
    vector<int> res;
    while (!pq.empty())
    {
        int t = pq.top().first;
        while (t--)
        {
            res.push_back(pq.top().second);
        }
        pq.pop();
    }
    cout << "before removal: ";
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;

    res.erase(res.begin(), res.begin() + k);

    cout << "after removal: ";
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;

    unordered_set<int> st;
    for (auto it : res)
        st.insert(it);
    return st.size();
}
//2nd approach
int least_unique(vector<int> vec, int k)
{
    priority_queue<pp, vector<pp>, greater<pp>> pq;
    unordered_map<int, int> mp;

    for (auto it : vec)
        mp[it]++;

    for (auto it : mp)
    {
        pq.push({it.second, it.first});
    }
    vector<int> res;
    while(k>0)
    {
        k-=pq.top().first;
        if(k>=0)
        {
            pq.pop();
        }
    }
    return pq.size();
}

int main()
{
    vector<int> vec = {4, 3, 1, 1, 3, 3, 2};
    int k = 3;
    cout << least_unique(vec, k);
}