#include <bits/stdc++.h>
using namespace std;

bool bruteisAnagram(string s, string t)
{

    if (s.size() != t.size()) return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i]) return false;

    }
    return true;
}
bool isAnagram(string s, string t)
{

    // if(s.size()==t.size()) return false;

    map<char, int> mp1;
    map<char, int> mp2;

    for (int i = 0; i < s.size(); i++)
    {
        mp1[s[i]]++;
        mp2[t[i]]++;
    }
    for (int i = 0; i < mp1.size(); i++)
    {
        // if(mp1[s[i]]!=mp2[t[i]]) return false;
        // cout << mp1[s[i]] << " " << mp2[t[i]] << endl;
    }
    for (auto it : mp1)
    {
        if (mp2[it.first] != it.second)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";
    bruteisAnagram(s, t) ? cout << "Anagram" : cout << "Not Anagram";
}