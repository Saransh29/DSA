#include <bits/stdc++.h>
using namespace std;

vector<int> found_pattern(string &pattern)
{
    if (!pattern.size())
        return {};

    vector<int> v;
    unordered_map<char, int> mp;
    int index = 0;

    for (int i = 0; i < pattern.size(); i++)
    {
        if (mp.find(pattern[i]) == mp.end())
        {
            // nhi mila to insert krdo
            mp[pattern[i]] = index++;
            v.push_back(mp[pattern[i]]);
        }
        else
        {
            // map m mil gya to index ko vector m push krdo
            v.push_back(mp[pattern[i]]);
        }
    }
    // now we have the index vector
    return v;
}
vector<string> findAndReplacePattern(vector<string> &words, string pattern)
{

    vector<int> v = found_pattern(pattern);
    // v is the index vector here

    int n = words.size();
    vector<string> res;

    // iterate in the words vector
    for (int i = 0; i < n; ++i)
    {
        vector<int> pattern_word = found_pattern(words[i]);

        // if matched add words[i] to answer vector
        if (v == pattern_word)
            res.push_back(words[i]);
    }

    return res;
}

int main()
{
    vector<string> words = {"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    string pattern = "abb";
    vector<string> res = findAndReplacePattern(words, pattern);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}