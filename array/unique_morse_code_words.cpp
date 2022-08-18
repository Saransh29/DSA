#include <bits/stdc++.h>
using namespace std;
int uniqueMorseRepresentations(vector<string> &words)
{
    vector<string> morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

    vector<string> res;
    string str = "";
    for (int i = 0; i < words.size(); i++)
    {
        string temp = words[i];
        int sz = temp.size();
        str = "";
        for (int j = 0; j < sz; j++)
        {
            int ch = temp[j] - 97;
            str += morse[ch % 26];
        }

        res.push_back(str);
    }
    set<string> st;
    for (auto it : res)
        st.insert(it);
    return st.size();

    // did extra useless stuff
    
    // for(auto it:res)cout<<it<<endl;
    // unordered_map<string, int> count;
    // int cnt = 0;
    // for (auto x : res)
    //     count[x]++;
    // for (auto it : count)
    // {
    //     int temp = it.second;
    //     if (temp > 1)
    //         cnt += temp;
    // }
    // return cnt;
}
int main()
{
    vector<string> words = {"gin", "zen", "gig", "msg"};
    int res = uniqueMorseRepresentations(words);
    cout << res << endl;

    return 0;
}
